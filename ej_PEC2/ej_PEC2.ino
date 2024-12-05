const int TEMPO = 500;
byte led[] = {13,12,11,10,9};
byte i = 0;

void setup() {
  for(i=0; i<5; i++){
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  digitalWrite(led[i], LOW);
  i= (i+1)%5;
  digitalWrite(led[i], HIGH);
  delay(TEMPO);

}
