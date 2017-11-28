#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define ledPin 6
#define sensorPin1 5
#define sensorPin2 3
#define sensorPin3 4
long randNumber;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(88, ledPin, NEO_GRB + NEO_KHZ800);


void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  Serial.begin(9600);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  randomSeed(analogRead(0));
  

}

void loop() 
{
  if (digitalRead(sensorPin1) == HIGH || digitalRead(sensorPin2) == HIGH || digitalRead(sensorPin3) == HIGH)
  {
    randNumber = random(11);
    Serial.println(randNumber);
    {
      if (randNumber == 0 || randNumber == 6)
      {
        twincolorWipe(strip.Color(255, 0, 0), 5); // Red
        revtwincolorWipe(strip.Color(0, 255, 0), 5); // Green
        twincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        revtwincolorWipe(strip.Color(255, 0, 0), 5); // Red
        twincolorWipe(strip.Color(0, 255, 0), 5); // Green
        revtwincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        /*theaterChase(strip.Color(255,   0,   0), 50); // Red
        theaterChase(strip.Color(0,   255,   0), 50); // Green
        theaterChase(strip.Color(  0,   0, 255), 50); // Blue
        //rainbow(10);
        //theaterChaseRainbow(25);*/
        twincolorWipe(strip.Color(0, 0, 0), 10);
      }
      else if (randNumber == 1 || randNumber == 7)
      {
        theaterChase(strip.Color(255,   0,   0), 50); // Red
        theaterChase(strip.Color(0,   255,   0), 50); // Green
        theaterChase(strip.Color(  0,   0, 255), 50); // Blue
        /*rainbow(10);
        twincolorWipe(strip.Color(255, 0, 0), 5); // Red
        revtwincolorWipe(strip.Color(0, 255, 0), 5); // Green
        twincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        revtwincolorWipe(strip.Color(255, 0, 0), 5); // Red
        twincolorWipe(strip.Color(0, 255, 0), 5); // Green
        revtwincolorWipe(strip.Color(0, 0, 255), 5); // Blue*/
        twincolorWipe(strip.Color(0, 0, 0), 10);
      }
      else if (randNumber == 2 || randNumber == 8)
      {
        //rainbow(10);
        twincolorWipe(strip.Color(255, 0, 0), 5); // Red
        revtwincolorWipe(strip.Color(0, 255, 0), 5); // Green
        twincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        revtwincolorWipe(strip.Color(255, 0, 0), 5); // Red
        twincolorWipe(strip.Color(0, 255, 0), 5); // Green
        revtwincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        /*theaterChase(strip.Color(255,   0,   0), 50); // Red
        theaterChase(strip.Color(0,   255,   0), 50); // Green
        theaterChase(strip.Color(  0,   0, 255), 50); // Blue*/
        twincolorWipe(strip.Color(0, 0, 0), 10);
      }
      else if (randNumber == 3 || randNumber == 9)
      {
        theaterChase(strip.Color(255,   0,   0), 50); // Red
        theaterChase(strip.Color(0,   255,   0), 50); // Green
        theaterChase(strip.Color(  0,   0, 255), 50); // Blue
        /*twincolorWipe(strip.Color(255, 0, 0), 5); // Red
        revtwincolorWipe(strip.Color(0, 255, 0), 5); // Green
        twincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        revtwincolorWipe(strip.Color(255, 0, 0), 5); // Red
        twincolorWipe(strip.Color(0, 255, 0), 5); // Green
        revtwincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        //rainbow(10);*/
        twincolorWipe(strip.Color(0, 0, 0), 10);
      }
      else if (randNumber == 4 || randNumber == 10)
      {
        twincolorWipe(strip.Color(255, 0, 0), 5); // Red
        revtwincolorWipe(strip.Color(0, 255, 0), 5); // Green
        twincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        revtwincolorWipe(strip.Color(255, 0, 0), 5); // Red
        twincolorWipe(strip.Color(0, 255, 0), 5); // Green
        revtwincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        /*rainbow(10);
        theaterChase(strip.Color(255,   0,   0), 50); // Red
        theaterChase(strip.Color(0,   255,   0), 50); // Green
        theaterChase(strip.Color(  0,   0, 255), 50); // Blue*/
        twincolorWipe(strip.Color(0, 0, 0), 10);
      }
      else if (randNumber == 5 || randNumber == 11)
      {
        //rainbow(10);
        theaterChase(strip.Color(255,   0,   0), 50); // Red
        theaterChase(strip.Color(0,   255,   0), 50); // Green
        theaterChase(strip.Color(  0,   0, 255), 50); // Blue
        /*twincolorWipe(strip.Color(255, 0, 0), 5); // Red
        revtwincolorWipe(strip.Color(0, 255, 0), 5); // Green
        twincolorWipe(strip.Color(0, 0, 255), 5); // Blue
        revtwincolorWipe(strip.Color(255, 0, 0), 5); // Red
        twincolorWipe(strip.Color(0, 255, 0), 5); // Green
        revtwincolorWipe(strip.Color(0, 0, 255), 5); // Blue*/
        twincolorWipe(strip.Color(0, 0, 0), 10);
      }
    }
  }
}

void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

void revtwincolorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=44, l=43; i<strip.numPixels(), l<strip.numPixels(); l--, i++) {
    strip.setPixelColor(i, c);
    strip.setPixelColor(l, c);
    strip.show();
    delay(wait);
  }
}

void twincolorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=87, l=0; i<strip.numPixels(), l<strip.numPixels(); l++, i--) {
    strip.setPixelColor(i, c);
    strip.setPixelColor(l, c);
    strip.show();
    delay(wait);
  }
}

void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
        }
        strip.show();
       
        delay(wait);
       
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, 0);        //turn every third pixel off
        }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if(WheelPos < 170) {
    WheelPos -= 85;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}
