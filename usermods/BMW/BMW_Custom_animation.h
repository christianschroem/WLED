#pragma once

#include "wled.h"

#define PALETTE_SOLID_WRAP   (strip.paletteBlend == 1 || strip.paletteBlend == 3)


void setSegmentPixels(uint16_t startIndex, uint16_t segLen, uint16_t ledIndex, uint16_t rem, bool invert) {
  for (int i = 0; i < segLen; i++) {
    uint16_t index = startIndex + (invert ? (segLen - 1 - i) : i);
    uint32_t col0 = 0xFFFFFF;
    uint32_t col1 = 0x000000;
    if (i < ledIndex) {
      SEGMENT.setPixelColor(index, col1);
    } else {
      SEGMENT.setPixelColor(index, col0);
      if (i == ledIndex) SEGMENT.setPixelColor(index, color_blend(col1, col0, rem));
    }
  }
}

static uint32_t animation1cStartTime;

void initAnimation1c(void) {
  animation1cStartTime = strip.now;
}

uint16_t animation1c(void) {
  uint32_t cycleTime = 10000;
  uint32_t elapsed = strip.now - animation1cStartTime;
  uint32_t perc = elapsed % cycleTime;
  uint16_t segmentLength = 118;
  uint16_t prog = (perc * 32767) / cycleTime;
  uint16_t ledIndex = (prog * segmentLength) >> 15;
  uint16_t rem = 0;
  rem = (prog * segmentLength) * 2;
  rem /= (SEGMENT.intensity + 1);
  if (rem > 255) rem = 255;

  // Segment 1
  setSegmentPixels(0, segmentLength, ledIndex, rem, false);

  // Segment 2 (invertiert)
  setSegmentPixels(1 * segmentLength, segmentLength, ledIndex, rem, true);

  // Segment 3
  setSegmentPixels(2 * segmentLength, segmentLength, ledIndex, rem, false);

  // Segment 4 (invertiert)
  setSegmentPixels(3 * segmentLength, segmentLength, ledIndex, rem, true);

  return FRAMETIME;
}



static uint32_t animation2aStartTime;

void initAnimation2a(void) {
  animation2aStartTime = strip.now;
}

// BMW M Colors walking around the strip
uint16_t animation2a(void) {
  uint32_t cycleTime = 10000; 
  uint32_t cycleProgress = strip.now % cycleTime; // Progress within the current cycle in milliseconds
  uint16_t animationStep = (cycleProgress * (SEGLEN + 64)) / cycleTime; // Calculated animation step based on progress

  // Definiere die Grundfarben
  uint32_t colors[] = {0xFFFFFF, 0xFF0000, 0x0000FF, 0x00FFFF};  // White, red, blue, light blue
  uint16_t numColors = sizeof(colors) / sizeof(colors[0]);
  uint16_t ledsPerColor = 16;
  uint16_t totalActiveLeds = ledsPerColor * numColors; // A total of 64 LEDs

   for (int i = 0; i < SEGLEN; i++) {
    // Standardmäßig LEDs ausschalten
    SEGMENT.setPixelColor(i, 0);

    if (animationStep < SEGLEN + totalActiveLeds) {
      uint16_t index = (i + animationStep) % (SEGLEN + totalActiveLeds);
      if (index < totalActiveLeds) {
        uint16_t colorIndex = (index / ledsPerColor) % numColors;
        uint32_t color = colors[colorIndex];  // Wählt die entsprechende Grundfarbe aus
        SEGMENT.setPixelColor(i, color);
      }
    }
  }
  return FRAMETIME;
}

static uint32_t animation2bStartTime;

void initAnimation2b(void) {
  animation2bStartTime = strip.now;
}
uint16_t animation2b(void) {
  //SEGMENT.setPixelColor.setPixelColor(0, 0xFFFFFF);
  return FRAMETIME;
}


uint8_t currentEffect = 0;
uint32_t lastChangeTime = 0;
uint32_t effectDuration = 10000;
bool delayElapsed = false;

uint16_t playlist(void)
{
  uint32_t now = strip.now;
  
  if (now < 1800){
    return FRAMETIME;
  }

  if (lastChangeTime == 0) {
    lastChangeTime = now;
    initAnimation1c();
  }
    

  if (now - lastChangeTime >= effectDuration) {
    currentEffect = (currentEffect + 1) % 3;
    lastChangeTime = now;
    
    switch (currentEffect) {
      case 0:
        initAnimation1c();
        break;
      case 1:
        initAnimation2a();
        break;
      case 2:
        initAnimation2b();
        break;
    }
  }

  switch (currentEffect) {
    case 0:
      return animation1c();
    case 1:
      return animation2a();
    case 2:
      return animation2b();
    default:
      return FRAMETIME;
  }
}


static const char _data_FX_MODE_PLAYLIST[] PROGMEM = "BMWPLAYLIST@!,!;!,!;!";
static const char _data_FX_MODE_1C[] PROGMEM = "BMW1C@!,!;!,!;!";
static const char _data_FX_MODE_2A[] PROGMEM = "BMW2A@!,!;!,!;!";
static const char _data_FX_MODE_2B[] PROGMEM = "BMW2B@!,!;!,!;!";

class BmwCustomAnimation : public Usermod {

public:
  void setup() {
    //188 is first mode nr 
    strip.addEffect(200, &playlist, _data_FX_MODE_PLAYLIST);
    strip.addEffect(201, &animation1c, _data_FX_MODE_1C);
    strip.addEffect(202, &animation2a, _data_FX_MODE_2A);
    strip.addEffect(203, &animation2b, _data_FX_MODE_2B);
    Serial.println("Custom animations added.");
    //strip.setSegment(0,0,118);
    //strip.setSegment(1,118,236);
    //strip.setSegment(2,236,354);
    //strip.setSegment(3,354,472);
  }

  void loop() {

  }
};
