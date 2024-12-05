
int ledverde=11;
int ledamarelo=10;
int ledlaranja=9;
int ledvermelho=6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledverde,OUTPUT);
pinMode(ledamarelo,OUTPUT);
pinMode(ledlaranja,OUTPUT);
pinMode(ledvermelho,OUTPUT);

}

void loop() {
  int tempo=analogRead(A0);
  Serial.println(tempo);
  
  digitalWrite(ledverde,HIGH);
  delay(tempo);
  digitalWrite(ledverde,LOW);
  delay(tempo);

  digitalWrite(ledamarelo,HIGH);
  delay(tempo);
  digitalWrite(ledamarelo,LOW);
  delay(tempo);

  digitalWrite(ledlaranja,HIGH);
  delay(tempo);
  digitalWrite(ledlaranja,LOW);
  delay(tempo);

  digitalWrite(ledvermelho,HIGH);
  delay(tempo);
  digitalWrite(ledvermelho,LOW);
  delay(tempo);

}


  
