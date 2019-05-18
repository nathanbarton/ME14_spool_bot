 #include <avr/io.h>

#include <Wire.h>

#define BLINKPIN  A0

int count = 0;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(BLINKPIN, OUTPUT);
  Serial1.begin(9600);
  Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial1.println(count);
  count++;
  digitalWrite(BLINKPIN,HIGH);
  delay(1000);
  digitalWrite(BLINKPIN,LOW);
  delay(1000);
  
}
