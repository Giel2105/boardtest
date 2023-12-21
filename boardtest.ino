#include <FastLED.h>

#define NUM_LEDS 48
#define DATA_PIN 13

#define LED_TYPE WS2811
#define COLOR_ORDER RGB

CRGB leds[NUM_LEDS];
uint8_t B_1 = 0;
unsigned long Time = 3500;  

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS); 
}

void loop() {

  if ( millis() < Time){

  B_1 = beatsin8(30);

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(B_1,0,0);
  }

  Serial.println(B_1);
  FastLED.show();

  }

  else {

    
    FastLED.clear();
    
    for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(150,0,0);
    delay(80);
    FastLED.show();
    }

    delay(500);
    delay(100);
  
    Time = millis() + 3500;
    
  }

}
