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
    delay(10);
    FastLED.show();
    }

    digitalWrite(LED,HIGH);
    delay(500);
    delay(100);
    digitalWrite(LED,LOW);
  
    Time = millis() + 1500;
    
  }

}
