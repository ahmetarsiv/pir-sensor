#include <Servo.h>

byte sensorPin = 4;
int buzzer=12;
int led=11;
Servo myservo;

void setup()
{
   pinMode(sensorPin,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  myservo.attach(13);
  Serial.begin(9600);
}
void loop()
{
  byte  durum= digitalRead(sensorPin);
  if(durum== 1)
  {
     Serial.println("DIKKAT HAREKET VAR.");
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
    myservo.write(90);
  }
  else if (durum== 0)
  {
      Serial.println("HAREKET YOK!");
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
    myservo.write(0);
    
  }
  delay(500);
}
