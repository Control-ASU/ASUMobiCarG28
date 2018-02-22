  bool arr[8];
  int num=0;
void dectobin(int num,bool arr[8])
{
  for(int i=0;i<8;i++)
  {
    arr[8-i]=num%2;
    num=num/2;
  }

}
void setup() {
  for(int j=2;j<10;j++)
  {
    pinMode(j,OUTPUT);
  }

}

void loop() {
dectobin(num,arr);
for(int j=2;j<10;j++)
  {
    digitalWrite(j,arr[j-2]);
  }
 num=num+1;
 delay(1000);

}
