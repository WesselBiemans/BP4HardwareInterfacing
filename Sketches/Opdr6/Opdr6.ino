void setup()
{
	//ROOD
	pinMode(13, OUTPUT);
  
  	//BLAUW
  	pinMode(12, OUTPUT);
  
  	//GROEN
  	pinMode(11, OUTPUT);
}

void loop()
{
  //13
  kleur(255, 0, 0);
  //13 12
  kleur(255, 255, 0);
  //13 12 11
  kleur(255, 255, 255);
  //13 11
  kleur(255, 0, 255);
  //11
  kleur(0, 0, 255);
  //11 12
  kleur(0, 255, 255);
  //12
  kleur(0, 255, 0);
  //reset
  kleur(0, 0, 0);
}

//De reden waarom het RBG is i.p.v. RGB is omdat ik dan input 13, 12 en 11 kan houden.
//(Makkelijker om mee te werken)
void kleur (int Rood, int Blauw, int Groen){
  analogWrite(13, Rood);
  analogWrite(11, Groen);
  analogWrite(12, Blauw);
  delay(1000);
}