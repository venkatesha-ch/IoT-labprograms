float sensorValue;
void setup(){
Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(A0);
  if(sensorValue>=200)
  {
    digitalWrite(13, HIGH);
    Serial.print(sensorValue);
    Serial.println("Danger...");
    delay(sensorValue);
  }
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    Serial.println("Sensor Value : ");
    Serial.println(sensorValue);
  }
  delay(1000);
}