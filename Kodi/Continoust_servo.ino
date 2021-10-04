#include <Servo.h> //Servo library

Servo myservo;  //Servo name is myservo
Servo myservo2;
Servo myservo3;
Servo myservo4;
#define GREEN 12
#define RED 13
void setup() {
  Serial.begin(9600);
  myservo.attach(6);  // attaches the servo signal pin on pin D6
  myservo2.attach(5);
  myservo3.attach(9);
  myservo4.attach(10);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  myservo.write(0); //Turn clockwise at high speed
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  delay(3000);
  digitalWrite(GREEN,HIGH);
  digitalWrite(RED,LOW);
  myservo.detach();//Stop. You can use deatch function or use write(x), as x is the middle of 0-180 which is 90, but some lack of precision may change this value
  myservo2.detach();
  myservo3.detach();
  myservo4.detach();
  delay(2000);
  myservo.attach(6);//Always use attach function after detach to re-connect your servo with the board
  myservo2.attach(5);
  myservo3.attach(9);
  myservo4.attach(10);

  myservo.write(180);
  myservo2.write(180);
  myservo3.write(180);
  myservo4.write(180);
  delay(3000);
  digitalWrite(GREEN,LOW);
  digitalWrite(RED,HIGH);
  myservo.detach();//Stop
  myservo2.detach();
  myservo3.detach();
  myservo4.detach();
  delay(2000);
  myservo.attach(6);
  myservo2.attach(5); 
  myservo3.attach(9); 
  myservo4.attach(10); 
     
}
