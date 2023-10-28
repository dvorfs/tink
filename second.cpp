int lamp1 = 2;
int lamp2 = 4;
int btn = 13;

void setup()
{
  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(btn)== HIGH){
    digitalWrite(lamp1, HIGH);
    digitalWrite(lamp2, HIGH);
    delay(1000);
    digitalWrite(lamp1, LOW);
    digitalWrite(lamp2, LOW);
    delay(2000);
  }
}
