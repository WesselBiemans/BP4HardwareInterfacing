void setup() {
  // wordt een keer uitgevoerd
  pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop() {
  // code wat wordt herhaald
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
}



