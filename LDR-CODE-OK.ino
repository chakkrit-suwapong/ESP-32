int ledPin1 = D3;
int ledPin2 = D4;
 
int analogPin = A0; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
int val = 0;
void setup() {
  pinMode(ledPin1, OUTPUT);  // sets the pin as output
  pinMode(ledPin2, OUTPUT);
 
  pinMode(analogPin, INPUT);
  
  Serial.begin(9600);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  
  
}

void loop() {
  val = analogRead(analogPin);  //อ่านค่าสัญญาณ analog ขา5 ที่ต่อกับ LDR
  Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val); // พิมพ์ค่าของตัวแปร val
  if (val < 200) { // ค่า 100 สามารถกำหนดปรับได้ตามค่าแสงในห้องต่างๆ
   // digitalWrite(ledPin, LOW); // สั่งให้ LED ติดสว่าง
   digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  
    
  }
  else {
    //digitalWrite(ledPin, HIGH); // สั่งให้ LED ดับ
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
   
  }
  delay(100);
}
