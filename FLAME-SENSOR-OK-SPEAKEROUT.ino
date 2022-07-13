int ledPin = D3;
int analogPin = A0; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);  //อ่านค่าสัญญาณ analog ขา5
  Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val); // พิมพ์ค่าของตัวแปร val
  if (val < 900) { // ค่า 900 สามารถกำหนดปรับได้ตามค่าแสงในห้องต่าง
    digitalWrite(ledPin, HIGH); // สั่งให้ LED ติดสว่าง
    //tone(500);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  else {
    digitalWrite(ledPin, LOW); // สั่งให้ LED ดับ
  }
  delay(100);
}
