#include <Servo.h>
Servo servo;
//int servo_pin = 2;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(2);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(90);
  
  delay(1000);
  
  servo.write(0);
  
  delay(1000);
}
