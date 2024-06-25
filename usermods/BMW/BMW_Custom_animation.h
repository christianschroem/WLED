#pragma once
#include "wled.h"

// Forward declarations
void initAnimation1c(void);
void initAnimation2a(void);
void initAnimation2b(void);
uint16_t animation1c(void);
uint16_t animation2a(void);
uint16_t animation2b(void);

// globals
#define SEGMENT_LENGTH 120
uint8_t currentEffect = 0;


// -------------------------------------------------------- 
// ----------------------ANIMATION 1C---------------------- 
// --------------------------------------------------------


static bool animation1cReset = false;
uint16_t animation1c(void) {
  uint32_t col0 = 0xFFFFFF;
  uint32_t col1 = 0x000000;
  uint32_t cycleTime = 10000;

  
  const uint8_t segmentCount = 4;
  const uint16_t segmentLength = SEGMENT_LENGTH;

  if (!animation1cReset) {
    resetTimebase();
    for (int s = 0; s < segmentCount; s++) {
      for (int i = 0; i < segmentLength; i++) {
        SEGMENT.setPixelColor(s * segmentLength + i, col0);
      }
    }
    animation1cReset = true;
    return FRAMETIME;
  }

  uint32_t perc = strip.now % cycleTime;
  uint16_t prog = (perc * 65535) / cycleTime;
  uint16_t ledIndex = (prog * segmentLength) >> 16; 
  
 for (int s = 0; s < segmentCount; s++) {
    bool invert = (s == 1 || s == 3);  // Invert for segments 2 and 4

    for (int i = 0; i < segmentLength; i++) {
      uint16_t index = s * segmentLength + (invert ? (segmentLength - 1 - i) : i);
      SEGMENT.setPixelColor(index, (i > ledIndex) ? col0 : col1);
    }
  }
  if(ledIndex >= 119) {
    Serial.println("animation 1c finished");
    resetTimebase();
    currentEffect = 1;
  }

  return FRAMETIME;
}




// -------------------------------------------------------- 
// ----------------------ANIMATION 2A---------------------- 
// --------------------------------------------------------


static bool animation2aReset = false;

uint16_t animation2a(void) {
    
  uint32_t cycleTime = 10000; 
  uint32_t cycleProgress = strip.now % cycleTime; 
  uint16_t animationStep = (cycleProgress * (SEGMENT_LENGTH * 2 + 64)) / cycleTime; 

  // Grundfarben definieren
  uint32_t colors[] = {0xFFFFFF, 0xFF0000, 0x0000FF, 0x00FFFF};  // Weiß, Rot, Blau, Hellblau
  uint16_t numColors = sizeof(colors) / sizeof(colors[0]);
  uint16_t ledsPerColor = 16;
  uint16_t totalActiveLeds = ledsPerColor * numColors; // Insgesamt 64 LEDs

if(animationStep <= 66 && !animation2aReset)  {
      return FRAMETIME;
    }

if (!animation2aReset) {
    for (int s = 0; s < SEGMENT_LENGTH*4; s++) {
        SEGMENT.setPixelColor(s, 0x000000);
    }
    animation2aReset = true;
    return FRAMETIME;
}

  animation2aReset = true;
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
   if (animationStep == 65) {
    Serial.println("animation 2a finished");
    currentEffect = 2;
  }

  return FRAMETIME;
}

// -------------------------------------------------------- 
// ----------------------ANIMATION 2B---------------------- 
// --------------------------------------------------------

static uint32_t animation2bStartTime;
static bool animation2breset = false;
bool newLightStarted = false;
uint32_t newLightStartTime = 0;

const uint32_t CYCLE_TIME = 10000;
const uint16_t TOTAL_ACTIVE_LEDS = 36; // Sum of white and colored LEDs
const uint16_t SEGMENT_OFFSET = SEGMENT_LENGTH + TOTAL_ACTIVE_LEDS;

// Struct for color configuration
struct ColorConfig {
    uint32_t primaryColor;
    uint32_t secondaryColor;
    uint16_t primaryLEDs;
    uint16_t secondaryLEDs;
};

// Function to set pixel colors for a segment
void setSegmentColors(int segmentStart, uint16_t animationStep, ColorConfig config, bool reverse) {
    for (int i = 0; i < SEGMENT_LENGTH; i++) {
        uint16_t index;
        if (reverse) {
            // Berechnung für rückwärts laufende Animation
            index = (SEGMENT_LENGTH - 1 - i + animationStep) % SEGMENT_OFFSET;
        } else {
            // Berechnung für vorwärts laufende Animation
            index = (i + animationStep) % SEGMENT_OFFSET;
        }
        uint32_t color = index < config.primaryLEDs ? config.primaryColor : config.secondaryColor;
        if (index < TOTAL_ACTIVE_LEDS) {
            SEGMENT.setPixelColor(segmentStart + i, color);
        }
    }
}



uint16_t animation2b(void) {
    if(!animation2breset) {
        animation2bStartTime = strip.now;
        animation2breset = true;
        return FRAMETIME;
    }

    uint32_t cycleProgress = strip.now % CYCLE_TIME;
    uint32_t blueCycleProgress = (strip.now + (CYCLE_TIME / 3)) % CYCLE_TIME;
    uint16_t animationStep = (cycleProgress * SEGMENT_OFFSET) / CYCLE_TIME;
    uint16_t blueAnimationStep = (blueCycleProgress * SEGMENT_OFFSET) / CYCLE_TIME;

    ColorConfig redConfig = {0xFFFFFF, 0xFF0000, 4, 32};
    ColorConfig blueConfig = {0xFFFFFF, 0x0000FF, 4, 32};
    ColorConfig newLightConfig = {0xFFFFFF, 0x00FFFF, 4, 16};
    // Turn off all LEDs initially
    for (int i = 0; i < SEGMENT_LENGTH * 4; i++) {
        SEGMENT.setPixelColor(i, 0);
    }

    bool isRedSecondPhase = animationStep >= (SEGMENT_OFFSET / 2);
    bool isBlueSecondPhase = blueAnimationStep >= (SEGMENT_LENGTH / 2);
    bool isRedNearEnd = (SEGMENT_LENGTH - animationStep) <= 10;


    //Switching segments
    if (!isRedSecondPhase) {
        setSegmentColors(0, animationStep, redConfig, true);
    } else {
        setSegmentColors(SEGMENT_LENGTH, animationStep, redConfig, false);
    }

     if (!isBlueSecondPhase) {
        setSegmentColors(2 * SEGMENT_LENGTH, blueAnimationStep, blueConfig, true); // Segment 3 rückwärts
     } else {
        setSegmentColors(3 * SEGMENT_LENGTH, blueAnimationStep, blueConfig, false); // Segment 4 vorwärts
     }

    //new light = light blue (3rd)
     if (isRedNearEnd && !newLightStarted) {
      newLightStarted = true;
      newLightStartTime = strip.now;
}

    if (newLightStarted) {
    
    uint32_t newLightProgress = (strip.now - newLightStartTime) % CYCLE_TIME;
    uint16_t newLightAnimationStep = (newLightProgress * SEGMENT_OFFSET) / CYCLE_TIME;

    //3rd light
    setSegmentColors(0, newLightAnimationStep, newLightConfig, true);
}
   if (animationStep == 155) {
    Serial.println("animation 2b finished");
    currentEffect = 0;
    
}
return FRAMETIME;
}


// --------------------------------------------------------
// ----------------------PLAYLIST--------------------------
// --------------------------------------------------------

uint16_t playlist(void) {
  
  // Add a start delay to wait for device ready (avoid output lag)

  if (strip.now < 1800) {
    return FRAMETIME;
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

// --------------------------------------------------------
// ----------------------MODES-----------------------------
// --------------------------------------------------------

static const char _data_FX_MODE_PLAYLIST[] PROGMEM = "BMWPLAYLIST@!,!;!,!;!";
static const char _data_FX_MODE_1C[] PROGMEM = "BMW1C@!,!;!,!;!";
static const char _data_FX_MODE_2A[] PROGMEM = "BMW2A@!,!;!,!;!";
static const char _data_FX_MODE_2B[] PROGMEM = "BMW2B@!,!;!,!;!";


// --------------------------------------------------------
// ----------------------USERMOD---------------------------
// --------------------------------------------------------

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
