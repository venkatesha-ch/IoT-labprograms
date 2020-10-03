void setup()
{
 pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
int value=digitalRead(2);
  delay(50);
  
  if(value==HIGH)
  {
 digitalWrite(13,HIGH);
  }
  else
  {
 digitalWrite(13,LOW);
  }
  
}