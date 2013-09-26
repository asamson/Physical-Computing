//Adam Samson
//Simple LDR sketch with pulsating LED, loosely adopted from "Fade" example sketch, modified.
int led = 9;
int brightness = 0;
int fadeAmount = 5;
const int sensorPin = 0; // connect sensor to analog input 0
void setup()
{
pinMode(led, OUTPUT); // enable output on the led pin
Serial.begin(9600);
}
void loop()
{
int fadespeed;
  int rate = analogRead(sensorPin);
  analogWrite(led, brightness);
  
   brightness = brightness + fadeAmount;
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }   
      if(rate <= 500){
   fadespeed = 3;
 }
 else {
   fadespeed = 10;
 }
    delay(fadespeed);
    Serial.println(fadespeed);
  
}
