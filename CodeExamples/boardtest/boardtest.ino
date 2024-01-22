#include <FastLED.h>

#define NUM_LEDS 48
#define DATA_PIN 13

#define LED_TYPE WS2811
#define COLOR_ORDER RGB
#define LED 2

CRGB leds[NUM_LEDS];
uint8_t B_1 = 0;
unsigned long Time = 1500;  

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS); 
  pinMode(LED,OUTPUT);
}

void loop() {
  
    fill_solid(leds, NUM_LEDS, CHSV(0,0,255));
    digitalWrite(LED,HIGH);
    FastLED.show(255);
    delay(500);

    fill_solid(leds, NUM_LEDS, CHSV(0,0,0));
    FastLED.show(255);
    digitalWrite(LED,LOW);
    delay(500);
   
   
}
