int RED = 2;
int BLUE = 4;
int GREEN = 7;
int dinP = 9;
int btn = 12;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(dinP, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(btn)== HIGH){
    tone(dinP, 500);
    digitalWrite(RED, HIGH);
    delay(200);
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, HIGH);
    delay(200);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, HIGH);
    delay(200);
    digitalWrite(GREEN, LOW);
    delay(200);
    noTone(dinP);
  }
}
