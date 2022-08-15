/*
Connect the Servo to Pin 7
Connect the Potentiometer to Analog Pin 0
*/
//Add Libraries
#include <Servo.h>

Servo A;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  A.attach(7);//Declare Pin of the Servo
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);//Read value of the Potentiometer
  a = map(a, 0, 1023, 0, 180);//Map the Potentiometer with the Servo Values
  Serial.println(a);//Move the Servo
  A.write(a);
  delay(10);
  
}
/*
Designed and written by Joey Kanyi
*/
