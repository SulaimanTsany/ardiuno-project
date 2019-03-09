
void setup() {
  pinMode(16, INPUT); //D0
  pinMode(15, OUTPUT); //D8
  Serial.begin(230400);
  Serial.println("app start");
}

void loop() {
//  if (value < 100) {
//    value = 0;
//  }
//  Serial.println(value);
  //int value = analogRead(A0);
  //analogWrite(15, value);

  int value = digitalRead(16);
  if (value == 1) {
    digitalWrite(15, HIGH);
  } else if (value == 0) {
    digitalWrite(15, LOW);
  }
  Serial.println(value);
  delay(500);
}
