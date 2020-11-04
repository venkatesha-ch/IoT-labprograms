
void setup()
{
pinMode(2, INPUT);
pinMode(13, OUTPUT);
}
void loop()
{
int reading;
reading = digitalRead(2);
if(reading)
digitalWrite(13, LOW);
else
digitalWrite(13, HIGH);
}