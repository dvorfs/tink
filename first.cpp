int lamp1 = 2;
int lamp2 = 4;
int lamp3 = 7;
int lamp4 = 8;
int lamp5 = 12;
int btn = 13;

void setup()
{
  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(lamp3, OUTPUT);
  pinMode(lamp4, OUTPUT);
  pinMode(lamp5, OUTPUT);  
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(btn)== HIGH){
    digitalWrite(lamp1, HIGH);
    delay(1000); 
    digitalWrite(lamp2, HIGH);
    delay(1000);
    digitalWrite(lamp3, HIGH);
    delay(1000);
    digitalWrite(lamp4, HIGH);
    delay(1000);
    digitalWrite(lamp5, HIGH);
    delay(1000);
    digitalWrite(lamp1, LOW);
    digitalWrite(lamp2, LOW);
    digitalWrite(lamp3, LOW);
    digitalWrite(lamp4, LOW);
    digitalWrite(lamp5, LOW);
    delay(1000);
  }
}
