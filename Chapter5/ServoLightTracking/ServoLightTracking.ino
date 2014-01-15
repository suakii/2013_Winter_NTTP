#include <Servo.h>

int left = A0;
int right = A1;
int sensorValue = 0;
Servo myservo;
int value;
int center = 100;

void setup() {
   myservo.attach(9);
 }
void loop() {
  int left = analogRead(A0);//왼쪽 빛 센서
  int right = analogRead(A1);//오른쪽 빛 센서
  value = (left - right) / 10;
  if (value == 0)
    myservo.detach();
  else
    myservo.attach(9);
 
  if (value > 10)
    value = -70;
  else
    value = 70;
  myservo.write(center+value);
  delay(10);
 
}
