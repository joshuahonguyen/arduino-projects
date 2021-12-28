#include <Servo.h>

Servo pan;
Servo tilt;

char input = 0;
int pan_pos = 90;
int tilt_pos = 90;

void setup() {
  pan.attach(8);
  tilt.attach(9);
  pan.write(pan_pos);
  tilt.write(tilt_pos);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.read();

    if (input == 'd') {
      Serial.println(tilt_pos);
      if (tilt_pos == 150) {
        for (tilt_pos; tilt_pos < 180; tilt_pos += 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 120) {
        for (tilt_pos; tilt_pos < 150; tilt_pos += 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 90) {
        for (tilt_pos; tilt_pos < 120; tilt_pos += 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 60) {
        for (tilt_pos; tilt_pos < 90; tilt_pos += 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 30) {
        for (tilt_pos; tilt_pos < 60; tilt_pos += 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 0) {
        for (tilt_pos; tilt_pos < 30; tilt_pos += 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      Serial.println(tilt_pos);
    }

    else if (input == 'u') {
      Serial.println(tilt_pos);
      if (tilt_pos == 180) {
        for (tilt_pos; tilt_pos > 150; tilt_pos -= 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 150) {
        for (tilt_pos; tilt_pos > 120; tilt_pos -= 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 120) {
        for (tilt_pos; tilt_pos > 90; tilt_pos -= 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 90) {
        for (tilt_pos; tilt_pos > 60; tilt_pos -= 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 60) {
        for (tilt_pos; tilt_pos > 30; tilt_pos -= 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      else if (tilt_pos == 30) {
        for (tilt_pos; tilt_pos > 0; tilt_pos -= 1) {
          tilt.write(tilt_pos);
          delay(10);
        }
      }
      Serial.println(tilt_pos);
    }

    else if (input == 'l') {
      Serial.println(pan_pos);
      if (pan_pos == 180) {
        for (pan_pos; pan_pos > 150; pan_pos -= 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 150) {
        for (pan_pos; pan_pos > 120; pan_pos -= 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 120) {
        for (pan_pos; pan_pos > 90; pan_pos -= 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 90) {
        for (pan_pos; pan_pos > 60; pan_pos -= 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 60) {
        for (pan_pos; pan_pos > 30; pan_pos -= 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 30) {
        for (pan_pos; pan_pos > 0; pan_pos -= 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      Serial.println(pan_pos);
    }

    else if (input == 'r') {
      Serial.println(pan_pos);
      if (pan_pos == 150) {
        for (pan_pos; pan_pos < 180; pan_pos += 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 120) {
        for (pan_pos; pan_pos < 150; pan_pos += 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 90) {
        for (pan_pos; pan_pos < 120; pan_pos += 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 60) {
        for (pan_pos; pan_pos < 90; pan_pos += 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 30) {
        for (pan_pos; pan_pos < 60; pan_pos += 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      else if (pan_pos == 0) {
        for (pan_pos; pan_pos < 30; pan_pos += 1) {
          pan.write(pan_pos);
          delay(10);
        }
      }
      Serial.println(pan_pos);
    }
    
  }
  
}
