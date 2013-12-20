//Ferrofluid ROBOT OS
//By Adam Samson
//Greatly reduced from its original form!
int relayPin = 2;
const int ledPin = 13;
int threshold = 700;
int sample;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:ser
void loop() {
    sample = analogRead(0);
     

  if (sample>threshold){
    digitalWrite(relayPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(3000);
   // sample = 0;
  }
  else{
    digitalWrite(relayPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  Serial.println(sample);



}

