void setup()
{
	//ROOD
	pinMode(11, OUTPUT);
  
  	//BLAUW
  	pinMode(10, OUTPUT);
  
  	//GROEN
  	pinMode(9, OUTPUT);
}

void loop()
{
  //11
  kleur(255, 0, 0);
  //11 10
  kleur(255, 255, 0);
  //11 10 9
  kleur(255, 255, 255);
  //11 9
  kleur(255, 0, 255);
  //9
  kleur(0, 0, 255);
  //9 10
  kleur(0, 255, 255);
  //10
  kleur(0, 255, 0);
  //reset
  kleur(0, 0, 0);
}

//De reden waarom het RBG is i.p.v. RGB is omdat ik dan input 13, 12 en 11 kan houden.
//(Makkelijker om mee te werken)
void kleur (int Rood, int Blauw, int Groen){
  analogWrite(11, Rood);
  analogWrite(9, Groen);
  analogWrite(10, Blauw);
  delay(1000);
}