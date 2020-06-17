 #include  <Servo.h>
 int x=0;
int y=0;
Servo motorA;
Servo motorB;
void setup()
{
motorA.attach(2);
motorB.attach(3);

}

void loop()
{
  x= analogRead(A0);
  x= map(x,0,1023,15,170);
  motorA.write(x);
  
  y= analogRead(A1);
  x= map(y,0,1023,15,170);
  motorB.write(y);
}