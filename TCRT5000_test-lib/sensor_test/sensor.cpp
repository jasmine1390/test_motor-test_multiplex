#include "sensor.h"
int i;
int a;
int b;
int c;
int S1 = 11;
int S2 = 12;
int S3 = 13;
int lt = 300;
int ht = 900;
int sensor_value[8];
int sensor_value_Digital[8];
void Kivi() {

  for (i = 0; i < 8; i++) {

    digitalWrite(S3, a = (i % 2));
    digitalWrite(S2, b = (int(i / 2) % 2));
    digitalWrite(S1, c = (int(int(i / 2) / 2)));
    int t = (ht + lt) / 2;
    sensor_value[i] = analogRead(A0);

    if (sensor_value[i] > t) {
      sensor_value_Digital[i] = 1;
    } else {
      sensor_value_Digital[i] = 0;
    }
    Serial.print(sensor_value[i]);
    Serial.print("  |  ");
    Serial.print(sensor_value_Digital[i]);
    Serial.print("\t");
  }
Serial.println("  ");
}
