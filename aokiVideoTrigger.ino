//4-30-16 Andrew Kleindolph extrasleepy.com for Kathy Aoki
#include "Keyboard.h"

int lightTimer13  = 0;
int lightTimer11  = 0;
int lightTimer10  = 0;

void setup() { // initialize the buttons' inputs:
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(3) == HIGH) {
    for (int i = 0; i < 2; i++) {
      Keyboard.write('q');
    }
    lightTimer10 = 0;

    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(300);
  }

  if (digitalRead(4) == HIGH) {
    for (int i = 0; i < 2; i++) {
      Keyboard.write('w');
    }
    lightTimer11= 0;

    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    delay(300);
  }

  if (digitalRead(5) == HIGH) {
    for (int i = 0; i < 2; i++) {
      Keyboard.write('e');
    }
    lightTimer13 = 0;

    digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(300);
  }

// change how long lights are on here:

  if (lightTimer13 > 30) {  //10 means 1 second, 100 = 10 seconds, 300 = 30 seconds, light by sticker
    digitalWrite(13, LOW);
  }
  if (lightTimer11 > 30) {  //10 means 1 second, 100 = 10 seconds, 300 = 30 seconds, middle light
    digitalWrite(11, LOW);
  }
  if (lightTimer10 > 30) {  //10 means 1 second, 100 = 10 seconds, 300 = 30 seconds, bottom light
    digitalWrite(10, LOW);
  }

  delay(100);      
  lightTimer13++;
  lightTimer11++;
  lightTimer10++;
}
