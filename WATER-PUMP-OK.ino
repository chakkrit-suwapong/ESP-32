int sw1 = D3 ;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(sw1,OUTPUT);
  digitalWrite(sw1,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(sw1,HIGH);
  delay(10000);
  digitalWrite(sw1,LOW);
  delay(5000);

}
