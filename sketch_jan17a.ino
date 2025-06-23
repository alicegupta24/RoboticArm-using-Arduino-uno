#include <Servo.h>  

Servo servo1;  // Create servo1 object
Servo servo2;  // Create servo2 object
Servo servo3;  // Create servo3 object

String readString = "";  // Initialize readString as an empty string

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo1.attach(2);
  servo1.write(0);
  servo2.attach(3);
  servo2.write(0);
  servo3.attach(4);
  servo3.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    char c = Serial.read();
    readString += c;
    delay(1);  // delay to allow buffer to fill
  }

  if (readString.length() > 0) {
    String Q = readString;
    readString = "";

    //-------------------------------Check Serial Port---------------------------------------
    if (Q.substring(0, 1) == "R") {
      String V1Val = Q.substring(1);
      int v1 = V1Val.toInt();

      delay(100);
      servo1.write(v1);
    }

    if (Q.substring(0, 1) == "G") {
      String V1Val = Q.substring(1);
      int v1 = V1Val.toInt();

      delay(100);
      servo2.write(v1);
    }

    if (Q.substring(0, 1) == "U") {
      String V1Val = Q.substring(1);
      int v1 = V1Val.toInt();

      delay(100);
      servo3.write(v1);
    }
  }
}
