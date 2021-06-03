int X=80,Y=60;			//Check Distances
int cm;
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  digitalWrite(11,HIGH);
}

void loop()
{
  // measure the ping time in cm
  // Clear the trigger
  digitalWrite(10, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(10, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);
  pinMode(9, INPUT);
  //pulseIn() Reads the echo pin, and returns the sound wave travel time in microseconds  
  cm = 0.01723 * pulseIn(9, HIGH);

  if (cm>X)							//Distance>80cm
             {						//Rotate Clockwise
               digitalWrite(7,HIGH);
               digitalWrite(6,LOW);
             }
  else if (cm<Y)					//Distance<60cm
             {						//Rotate Anti-Clockwise
               digitalWrite(6,HIGH);
               digitalWrite(7,LOW);
             }
  else			
             {						//Distance beyween 80cm and 60cm
               digitalWrite(7,LOW);	//Stop motor
               digitalWrite(6,LOW);
             }
             
}