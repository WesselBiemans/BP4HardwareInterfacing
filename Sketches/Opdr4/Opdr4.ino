int aantalLampies;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  //rotatieWaarde neemt elke loop de gegevens van analogRead(A0) over
  int rotatieWaarde = analogRead(A0);
  //de waardes 0-1023 van rotatieWaarde worden omgezet naar 0-7, een nummer voor elk lampje
  //de waardes worden omgekeerd zodat je de knop van links naar rechts moet draaien om de lampjes van links naar rechts aan te zetten i.p.v. van rechts naar links.
  aantalLampies = map(rotatieWaarde, 0, 1023, 7, 0);
  lampie(13, 0);
  lampie(12, 1);
  lampie(11, 2);
  lampie(10, 3);
  lampie(9, 4);
  lampie(8, 5);
  lampie(7, 6);
}

//de functie lampie krijgt de nummer van de output port en de nummer wat lager moet zijn dan de waarde van de draaiknop om het aan te zetten
void lampie (int lamp, int nummer) {
  if (aantalLampies > nummer){
    digitalWrite(lamp, HIGH);
  } else {
    digitalWrite(lamp, LOW);
  }
}
  