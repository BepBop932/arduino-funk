#include <Servo.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
String input;

void setup() {
    lcd.begin(16,2);
    lcd.print("Hello, World!");
    Serial.begin(9600);
}

void loop() {
    if(Serial.available()){
        Serial.print("type thing:");
        input = Serial.read();
    }
    lcd.clear();
    lcd.write(input);
    delay(1000);
}