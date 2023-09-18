#include <Servo.h>

float Position;
int Pos;
int potPin = A1;

int potVal;

Servo myservo;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;


void setup()
{
pinMode(potPin, INPUT); 
myservo.attach(8);
myservo1.attach(9);
myservo2.attach(10);
myservo3.attach(11);
myservo4.attach(12);


}

void loop()
{ 

potVal = analogRead(potPin);  
Position = potVal*180./1023.;
Pos = Position;
myservo.write(Pos);
myservo1.write(Pos);
myservo2.write(Pos);
myservo3.write(Pos);
myservo4.write(Pos);

}
