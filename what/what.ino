#include <Servo.h>

Servo x;

int pp = 5;
int pv;
int npv;

void setup() {
    x.attach(2);
    Serial.begin(9600);
}

void loop() {
    pv = analogRead(pp);
    npv = map(pv, 0, 1023, 0, 180);
    x.write(npv);
//    delay(15);
    Serial.println(npv);
}