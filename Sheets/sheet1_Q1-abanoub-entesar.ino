#define LED 13
#define T 2000

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  delay(T/4);
  digitalWrite(LED,LOW);
  delay((3*T)/4);
}
