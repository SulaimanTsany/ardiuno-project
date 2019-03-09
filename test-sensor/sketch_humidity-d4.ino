int value = 0;
void setup(){
  pinMode(2, INPUT);
  Serial.begin(230400);
  Serial.println("Start cika");
}
void loop(){
  value = digitalRead(2);
  Serial.println(value);
}
