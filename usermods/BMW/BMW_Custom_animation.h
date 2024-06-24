#pragma once
#include "wled.h"

// Vorwärtsdeklarationen
void initAnimation1c(void);
void initAnimation2a(void);
void initAnimation2b(void);
uint16_t animation1c(void);
uint16_t animation2a(void);
uint16_t animation2b(void);
uint8_t currentEffect = 0;

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
static bool animation1cCompleted = false;
void initAnimation1c(void) {
  animation1cStartTime = strip.now;
  animation1cCompleted = false;
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

  // Check if the animation is almost finished
  if (prog >= 32767 - (32767 / segmentLength) && !animation1cCompleted) {
    Serial.println("animation 1c finished");
    animation1cCompleted = true;
    initAnimation2a();
    currentEffect = 1;
  }

  if (prog < 32767 - (32767 / segmentLength)) {
    animation1cCompleted = false;
  }

  return FRAMETIME;
}



static uint32_t animation2aStartTime;

void initAnimation2a(void) {
  animation2aStartTime = strip.now;
}

#define SEGMENT_LENGTH 118 

uint16_t animation2a(void) {
  bool first = false;
  uint32_t cycleTime = 10000; 

  uint32_t cycleProgress = strip.now % cycleTime; 
  uint16_t animationStep = (cycleProgress * (SEGMENT_LENGTH * 2 + 64)) / cycleTime; 

  // Grundfarben definieren
  uint32_t colors[] = {0xFFFFFF, 0xFF0000, 0x0000FF, 0x00FFFF};  // Weiß, Rot, Blau, Hellblau
  uint16_t numColors = sizeof(colors) / sizeof(colors[0]);
  uint16_t ledsPerColor = 16;
  uint16_t totalActiveLeds = ledsPerColor * numColors; // Insgesamt 64 LEDs

   for (int i = 0; i < SEGMENT_LENGTH * 2; i++) {
    // Standardmäßig LEDs ausschalten
    SEGMENT.setPixelColor(i, 0);
    SEGMENT.setPixelColor(236 + i, 0);

    if (animationStep < SEGMENT_LENGTH * 2 + totalActiveLeds) {
      uint16_t index1 = (i + animationStep) % (SEGMENT_LENGTH * 2 + totalActiveLeds);
      
      if (index1 < totalActiveLeds) {
        uint16_t colorIndex1 = (index1 / ledsPerColor) % numColors;
        uint32_t color1 = colors[colorIndex1];
        SEGMENT.setPixelColor(i, color1); 
        SEGMENT.setPixelColor(236 + i, color1); 
      }
    }
  }

  //TODO: Fix bug, step 65 is two times in the full cycle
   if (animationStep == 65) {
    first = true;
    Serial.println("animation 2a finished");
    //currentEffect = 2;
  }
  return FRAMETIME;
}

static uint32_t animation2bStartTime;
static bool animation2breset = false;

uint16_t animation2b(void) {

  if(!animation2breset) {
    animation2bStartTime = strip.now;
    animation2breset = true;
    return FRAMETIME;
  }

  uint32_t cycleTime = 10000; 
  uint32_t cycleProgress = strip.now % cycleTime; 
  uint32_t blueCycleProgress = (strip.now + (cycleTime / 3)) % cycleTime; // Offset um 3,33 Sekunden
  uint16_t animationStep = (cycleProgress * (SEGMENT_LENGTH + 36)) / cycleTime; 
  uint16_t blueAnimationStep = (blueCycleProgress * (SEGMENT_LENGTH + 36)) / cycleTime;

  uint32_t colors[] = {0xFFFFFF, 0xFF0000};  // Weiß, Rot
  uint32_t altColors[] = {0xFFFFFF, 0x0000FF}; // Weiß, Blau
  uint16_t ledsPerColor[] = {4, 32};  // 4 weiße LEDs, 32 rote/blauen LEDs
  uint16_t totalActiveLeds = ledsPerColor[0] + ledsPerColor[1]; // Insgesamt 36 LEDs

  for (int i = 0; i < SEGMENT_LENGTH; i++) {
    // Standardmäßig LEDs ausschalten
    SEGMENT.setPixelColor(i, 0);
    SEGMENT.setPixelColor(SEGMENT_LENGTH + i, 0);
    SEGMENT.setPixelColor(2 * SEGMENT_LENGTH + i, 0);
    SEGMENT.setPixelColor(3 * SEGMENT_LENGTH + i, 0);

    if (animationStep < SEGMENT_LENGTH + totalActiveLeds) {
      // Animation für das erste Segment
      uint16_t index1 = (SEGMENT_LENGTH - 1 - i + animationStep) % (SEGMENT_LENGTH + totalActiveLeds);
      uint32_t color1 = index1 < ledsPerColor[0] ? colors[0] : colors[1];

      if (index1 < totalActiveLeds) {
        SEGMENT.setPixelColor(i, color1); 
      }

      // Animation für das zweite Segment
      uint16_t index2 = (i + animationStep) % (SEGMENT_LENGTH + totalActiveLeds);
      uint32_t color2 = index2 < ledsPerColor[0] ? colors[0] : colors[1];

      if (index2 < totalActiveLeds) {
        SEGMENT.setPixelColor(SEGMENT_LENGTH + i, color2); 
      }
    }

    if (blueAnimationStep < SEGMENT_LENGTH + totalActiveLeds) {
      // Animation für das dritte Segment (blau)
      uint16_t index3 = (SEGMENT_LENGTH - 1 - i + blueAnimationStep) % (SEGMENT_LENGTH + totalActiveLeds);
      uint32_t color3 = index3 < ledsPerColor[0] ? altColors[0] : altColors[1];

      if (index3 < totalActiveLeds) {
        SEGMENT.setPixelColor(2 * SEGMENT_LENGTH + i, color3); 
      }

      // Animation für das vierte Segment (blau)
      uint16_t index4 = (i + blueAnimationStep) % (SEGMENT_LENGTH + totalActiveLeds);
      uint32_t color4 = index4 < ledsPerColor[0] ? altColors[0] : altColors[1];

      if (index4 < totalActiveLeds) {
        SEGMENT.setPixelColor(3 * SEGMENT_LENGTH + i, color4); 
      }
    }
  }
  return FRAMETIME;
}





uint32_t lastChangeTime = 0;
uint32_t effectDuration = 10000;
bool delayElapsed = false;

uint16_t playlist(void) {
  uint32_t now = strip.now;
  
  // Add a start delay to wait for device ready (avoid output lag)
  if (now < 1800) {
    return FRAMETIME;
  }

  if (lastChangeTime == 0) {
    lastChangeTime = now;
    initAnimation1c();
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
  }

  void loop() {

  }
};
