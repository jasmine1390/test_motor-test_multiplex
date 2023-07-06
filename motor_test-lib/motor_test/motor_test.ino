void setup() {
  // put your setup code here, to run once:
for(int i = 7;i<=10;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
motor(100,100);
}
