int readPin = A3;
int v2 = 0;
int readVal;
int delayTime = 500;

void setup () {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  v2 = (5. / 1023.) * readVal
  Serial.println(v2);
  delay(delayTime);
}