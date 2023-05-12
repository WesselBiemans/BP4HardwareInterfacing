void setup()
{
	//Seriële Monitor beginnen
	Serial.begin(9600);
}

void loop()
{
	//Leest elke loop de waarde van de LM35 (kan van 0 tot 1023 lopen)
	int warmteAantal = analogRead(A0);
  
  	//Zet elke loop de waarde van 0 tot 1023 om naar 0 tot 500 om de temperatuur te kunnen aflezen
	int temperatuur = map(warmteAantal, 0, 1023, 0, 500);
  
  	//Zet in de Seriële Monitor een regel wat de waarde van temperatuur weergeeft
	Serial.println((String)"Het is " + temperatuur + " graden celcius");
  
  	//Delay zodat de temperatuur goed wordt weergegeven
	delay(1);
}