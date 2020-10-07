const int pingPin = 7;
void setup(){
 	Serial.begin(9600);
}
void loop()
{
  long duration, inch, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  pinMode(7, INPUT);
  duration = pulseIn(7, HIGH);
  inch = duration/147;
  cm = inch * 2.54;
  Serial.print("Distance (in cm) : ");
  Serial.println(cm);
  Serial.print("Distance (in inches) : ");
  Serial.println(inch);
  delay(500);
}