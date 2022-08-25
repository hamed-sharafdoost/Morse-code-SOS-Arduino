//Morse code of S : ...
//Morse code of O : ---
//Morse code of S : ...

void setup() 
{
  pinMode(2,OUTPUT);
}

void loop()
{
  //Morse code of S
    flash(200); 
    flash(200);
    flash(200);
  delay(500);
  //Morse code of O
  	flash(500);
  	flash(500);
  	flash(500);
  delay(500);
  //Morse code of S
  	flash(200);
  	flash(200);
  	flash(200);
  delay(500);
   
     
}
void flash(int duration)
{
  digitalWrite(2,HIGH);
  delay(duration);
  digitalWrite(2,LOW);
}