int pin = 16;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(pin, HIGH);
  digitalWrite(pin, HIGH);
  Serial.println(digitalRead(pin));
  delay(5000);
  digitalWrite(pin, LOW);
  Serial.println(digitalRead(pin));
  delay(5000);
}
