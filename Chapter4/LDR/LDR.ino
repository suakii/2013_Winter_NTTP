/*
*/

int sensorPin = 0;
int ledPin = 6;
int sensorValue = 0;
void setup() {

  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue);
}
