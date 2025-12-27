int readPin = A3;
int v2 = 0;
int delayTime = 500;

void setup () {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  v2 = analogRead(readPin);
  Serial.println(v2);
  delay(delayTime);
}