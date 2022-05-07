#include <Servo.h>

Servo servo;
//pins
int pinServo = 10;

int buzzerPin = 11; 

int motorEnA = A0;
int motorpin1 = 5;
int motorpin2 = 6;

//values
int mode = 1;
int steering = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(pinServo, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  pinMode(motorEnA, OUTPUT);
  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
  
  //digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(13, LOW);
  digitalWrite(buzzerPin, HIGH);

  //digitalWrite(motorpin1, LOW);
  //digitalWrite(motorpin2, LOW);

  servo.attach(pinServo);
  servo.write(87);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    char data = Serial.read();
    
    switch (data)
    {
      case 'a': //digitalWrite(buzzerPin, LOW);
        mode = 1;
        //analogWrite(motorEnA, 125*mode);
        break;

      case 'b': //digitalWrite(buzzerPin, LOW);
        mode = 2;
        //analogWrite(motorEnA, 125*mode);
        break;  
      
      case '0': digitalWrite(buzzerPin, HIGH);
        //digitalWrite(LED_BUILTIN, LOW);
        servo.write(87);
        analogWrite(motorEnA, 0);
        digitalWrite(motorpin1, LOW);
        digitalWrite(motorpin2, LOW);
        break;

      case '1': //digitalWrite(buzzerPin, HIGH); //audio OFF
        //digitalWrite(LED_BUILTIN, HIGH);
        servo.write(87-(steering*mode)); //104
        if(mode==1)
        {
          analogWrite(motorEnA, 255);
        }
        else
        {
          analogWrite(motorEnA, 165);
        }
        digitalWrite(motorpin1, HIGH);
        digitalWrite(motorpin2, LOW);
        break;

      case '2': //digitalWrite(buzzerPin, LOW); //audio ON
        //digitalWrite(LED_BUILTIN, HIGH);
        servo.write(87);
        if(mode==1)
        {
          analogWrite(motorEnA, 255);
        }
        else
        {
          analogWrite(motorEnA, 165);
        }
        digitalWrite(motorpin1, HIGH);
        digitalWrite(motorpin2, LOW);
        break;

      case '3': //digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, HIGH);
        if(mode==1)
        {
          analogWrite(motorEnA, 255);
        }
        else
        {
          analogWrite(motorEnA, 165);
        }
        servo.write(87+(steering*mode));
        digitalWrite(motorpin1, HIGH);
        digitalWrite(motorpin2, LOW);
        break;

      case '4': //digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, LOW);
        servo.write(87-(steering*mode));
        break;

      case '5': digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, HIGH);
        //servo.write(87);
        break;

      case '6': //digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, LOW);
        servo.write(87+(steering*mode));
        break;

      case '7': //digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, HIGH);
        if(mode==1)
        {
          analogWrite(motorEnA, 255);
        }
        else
        {
          analogWrite(motorEnA, 165);
        }
        servo.write(87-(steering*mode));
        digitalWrite(motorpin1, LOW);
        digitalWrite(motorpin2, HIGH);
        break;

      case '8': //digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, HIGH);
        if(mode==1)
        {
          analogWrite(motorEnA, 255);
        }
        else
        {
          analogWrite(motorEnA, 165);
        }
        servo.write(87);
        digitalWrite(motorpin1, LOW);
        digitalWrite(motorpin2, HIGH);
        break;

      case '9': //digitalWrite(buzzerPin, LOW);
        //digitalWrite(LED_BUILTIN, HIGH);
        if(mode==1)
        {
          analogWrite(motorEnA, 255);
        }
        else
        {
          analogWrite(motorEnA, 165);
        }
        servo.write(87+(7*mode));
        digitalWrite(motorpin1, LOW);
        digitalWrite(motorpin2, HIGH);
        break;
            
      default: break;
    }
    Serial.println(data);

    //digitalWrite(13,LOW);
    //digitalWrite(LED_BUILTIN,LOW);
  }
  //delay(20);
}
