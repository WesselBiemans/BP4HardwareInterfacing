void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // herhaal deze code continu:
  	int tel = 13;
  //wanneer lamp 13 is bereikt, ga van lamp 13 tot 6:
  	if (tel = 13) {
  		while (tel > 6) {
  			aanuit(tel);
			tel= tel - 1;
    	}
   //wanneer lamp 6 is bereikt, ga van lamp 6 tot 13
     	while (tel < 13) {
  		aanuit(tel);
		tel++;
    	}
  	}
}
void aanuit (int lamp) {
  //zet lamp aan
  digitalWrite(lamp, HIGH);
  //wacht een kwart seconde
  delay(250);
  //zet lamp uit
  digitalWrite(lamp, LOW);
}
    


