int sensor_l =3;//sensor signal pin is connected to pin2.
int sensor_c =2;
int sensor_r =4;
int A,B,C;
int motor1pin1 = 6;
int motor1pin2 = 5;
int motor2pin1 = 7;
int motor2pin2 = 8;

void setup() {
  pinMode(sensor_l , INPUT);//sensor signal pin declared as INPUT
  pinMode(sensor_c , INPUT);
  pinMode(sensor_r , INPUT);
  
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
A=digitalRead(3);
B=digitalRead(2);
C=digitalRead(4);

    digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(1000);

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(1000);
  
int left = digitalRead(sensor_l);//reading Sensor signal pin
int centre = digitalRead(sensor_c);
int right = digitalRead(sensor_r);
  {if(left == 1){
   Serial.println("left BLACK");
   delay(200);  
  }
  else if(left == 0){
   Serial.println("left WHITE"); 
   delay(200);
  }
  }
{
  if(centre == 1){
   Serial.println("centre BLACK");
   delay(200);  
  }
  else if(centre == 0){
   Serial.println("centre WHITE"); 
   delay(200);
  }
}
{
  if(right == 1){
   Serial.println("right BLACK");
   delay(200);   
  }
  else if(right == 0){
   Serial.println("right  bWHITE"); 
   delay(200);
  }
}
if(A==0 && B==0 && C==0)
{digitalWrite(11,0);
digitalWrite(12,0);
}
else if(A==1 && B==1 && C==1)
{digitalWrite(11,1);
digitalWrite(12,1);
}
else if(A==0    && B==1 && C==1)
{digitalWrite(11,0);
digitalWrite(12,1);
}
else if(A==1 && B==1 && C==0 )
{digitalWrite(11,1);
digitalWrite(12,0);
}
else if(A==0 && B==0 && C==1 )
{digitalWrite(11,0);
digitalWrite(12,1);
}
else if(A==1 && B==0 && C==0)
{digitalWrite(11,0);
digitalWrite(12,1);
}
else if(A==0 && B==1 && C==0)
{digitalWrite(11,1);
digitalWrite(12,1);
}
}
