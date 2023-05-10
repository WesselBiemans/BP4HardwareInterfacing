int gedrukt = true;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH){
    if (gedrukt == true){
      digitalWrite(11, HIGH);
      gedrukt = false;
      delay(500);
    } else {
      digitalWrite(11, LOW);
      gedrukt = true;
      delay(500);
  	}
  }
}
