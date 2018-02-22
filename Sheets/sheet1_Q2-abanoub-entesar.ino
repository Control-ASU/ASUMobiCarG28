
# define LED4  4
# define LED5 5
# define LED6 6
# define LED7 7
void setup() {
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED6,OUTPUT);
pinMode(LED7,OUTPUT);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
}

void loop() {

  digitalWrite(LED4,HIGH);
  delay(1000);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  delay(1000);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,HIGH);
  delay(1000);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,HIGH);
  delay(1000);
  digitalWrite(LED7,LOW);
}
