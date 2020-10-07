void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int rawvoltage, temp;
  float millivolts;
  rawvoltage=analogRead(A0);
  millivolts=(rawvoltage/1024.0)*5000;
  temp=millivolts/10;
  delay(100);
  if(temp>37){ 
    Serial.println("Fire alert");
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  else{
    Serial.println("Safe");
    digitalWrite(12,LOW);
    digitalWrite(13, LOW);
  }
} 