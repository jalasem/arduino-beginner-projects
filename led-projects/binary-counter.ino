const int ledPins[4] = {2, 3, 4, 5};

const int onTime = 1000;
const int offTime = 500;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void displayBinary(int number) {
  int remaining = number;

  if (remaining >= 8) {
    digitalWrite(ledPins[3], HIGH);
    remaining = remaining - 8;
  } else {
    digitalWrite(ledPins[3], LOW);
  }

  if (remaining >= 4) {
    digitalWrite(ledPins[2], HIGH);
    remaining = remaining - 4;
  } else {
    digitalWrite(ledPins[2], LOW);
  }

  if (remaining >= 2) {
    digitalWrite(ledPins[1], HIGH);
    remaining = remaining - 2;
  } else {
    digitalWrite(ledPins[1], LOW);
  }

  if (remaining >= 1) {
    digitalWrite(ledPins[0], HIGH);
  } else {
    digitalWrite(ledPins[0], LOW);
  }
}

void clearLeds() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  for (int count = 0; count < 16; count++) {
    displayBinary(count);
    delay(onTime);

    clearLeds();
    delay(offTime);
  }
}

// const int ledPins[4] = {2, 3, 4, 5};  // LSB to MSB
// const int maxCount = 16;

// const int onTime = 1000;   // 1 second ON
// const int offTime = 500;   // 0.5 second OFF

// void setup() {
//   for (int i = 0; i < 4; i++) {
//     pinMode(ledPins[i], OUTPUT);
//   }
// }

// void displayBinary(int value) {
//   for (int i = 0; i < 4; i++) {
//     int bitValue = (value >> i) & 1;
//     digitalWrite(ledPins[i], bitValue ? HIGH : LOW);
//   }
// }

// void clearLeds() {
//   for (int i = 0; i < 4; i++) {
//     digitalWrite(ledPins[i], LOW);
//   }
// }

// void loop() {
//   for (int count = 0; count < maxCount; count++) {
//     displayBinary(count);   // show number
//     delay(onTime);

//     clearLeds();            // turn all off
//     delay(offTime);
//   }
// }