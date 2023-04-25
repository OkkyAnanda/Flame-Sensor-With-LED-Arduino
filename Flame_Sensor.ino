int SensorPin=A0;
int SensorValue=0;
#include <Servo.h>
Servo servoLeft;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servoLeft.attach(10);
}
void loop() {
  // put your main code here, to run repeatedly:
 SensorValue=analogRead(SensorPin);
Serial.println(SensorValue);
delay(100);
if (SensorValue<=200){
Serial.println("LAMPU 1 MATI");
turnRight();
}else{
 Serial.println("LAMPU 1 NYALA");
turnLeft();
}
}
void forward()  {
  servoLeft.write(0);
  
}

void reverse()  {
  servoLeft.write(180);
  
}

void turnRight()  {
  servoLeft.write(180);
  
}
void turnLeft() {
  servoLeft.write(0);
  
}
void stopRobot()  {
  servoLeft.write(90);
  
}

