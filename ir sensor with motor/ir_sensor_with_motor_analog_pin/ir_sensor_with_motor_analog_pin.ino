const int left=A0;
const int centre=A1;
const int right=A2;
int inputVal1 = 0;
int inputVal2 = 0;
int inputVal3 = 0;
int D2,D3,D4;
//motor one
#define ENA 9
#define IN1 2
#define IN2 3

//motor two
#define ENB 10
#define IN3 4
#define IN4 5
int Speed = 120;
void setup()
{                
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);// Pin 13 has an LED connected on most Arduino boards:  
  pinMode(left,INPUT);    //Pin 2 is connected to the output of proximity sensor
  pinMode(centre,INPUT);
  pinMode(right,INPUT);
  Serial.begin(9600);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop()
{
  if(digitalRead(left)==HIGH)      //Check the sensor output
  {
    digitalWrite(D2, HIGH);   // set the LED on
  }
  else
  {
    digitalWrite(D2, LOW);    // set the LED off
  }
    if(digitalRead(centre)==HIGH)      //Check the sensor output
  {
    digitalWrite(D3, HIGH);   // set the LED on
  }
  else
  {
    digitalWrite(D3, LOW);    // set the LED off
  }
    if(digitalRead(right)==HIGH)      //Check the sensor output
  {
    digitalWrite(D4, HIGH);   // set the LED on
  }
  else
  {
    digitalWrite(D4, LOW);    // set the LED off
  }
inputVal1 = analogRead(left);
inputVal2 = analogRead(centre);
inputVal3 = analogRead(right);
Serial.print(inputVal1 );
Serial.print(",");
Serial.print(inputVal2  );
Serial.print(",");
Serial.println(inputVal3  );
delay(100);              // wait for a second
if (inputVal1 <300  && inputVal2 > 800 && inputVal3  < 300) {
    carforward();
    Serial.println("forward");
  } else if (inputVal1  > 800 && inputVal2 > 800 && inputVal3 > 800) {
    carStop();
  } else if (inputVal1 > 800 && inputVal2 < 300 && inputVal3 < 300) {
    carturnleft();
  } else if (inputVal1 < 300 && inputVal2 < 300 && inputVal3 > 800) {
    carturnright();
  }
}
void carforward() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void carturnleft() {
  analogWrite(ENA, 20);
  analogWrite(ENB, Speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void carturnright() {
  analogWrite(ENA, Speed);
  analogWrite(ENB, 20);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void carStop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}