#define pinLEDVerde 11
#define pinLEDAmarelo 12
#define pinLEDVermelho 13

void setup() {

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {

  digitalWrite(pinLEDVerde, HIGH);
  digitalWrite(pinLEDAmarelo, LOW);
  digitalWrite(pinLEDVermelho, LOW);

  delay(3000);

  digitalWrite(pinLEDVerde, LOW);
  digitalWrite(pinLEDAmarelo, HIGH);
  digitalWrite(pinLEDVermelho, LOW);

  delay(1000);

  digitalWrite(pinLEDVerde, LOW);
  digitalWrite(pinLEDAmarelo, LOW);
  digitalWrite(pinLEDVermelho, HIGH);

  delay(3000);


}
