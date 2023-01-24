const int left=A0;
const int centre=A1;
const int right=A2;
int inputVal1 = 0;
int inputVal2 = 0;
int inputVal3 = 0;
int D2,D3,D4;

void setup() 
{                
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);// Pin 13 has an LED connected on most Arduino boards:  
  pinMode(left,INPUT);    //Pin 2 is connected to the output of proximity sensor
  Serial.begin(9600);
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
}
