int buttonPin = 2;
int ledPin = 13;

void setup() {
Serial.begin(9600);
pinMode(buttonPin, INPUT_PULLUP);
pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorVal = digitalRead(buttonPin);

  Serial.println(sensorVal);
  
  if(sensorVal == HIGH){
    digitalWrite(ledPin, HIGH);

  }
  else {
    digitalWrite(ledPin, LOW);
  }

}
