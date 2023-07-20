void read_touch_pins() {
  int pin_states[8] = {
    touchRead(4),
    touchRead(15),
    touchRead(2),
    touchRead(12),
    touchRead(13),
    touchRead(27),
    touchRead(32),
    touchRead(33)
  };

  for (int i = 0; i < 8; i++) {
    Serial.print(pin_states[i]);
    Serial.print(" ");
  }

  Serial.println();
}


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200); 
// 1 и 9 - 04
// 2 и 12 - 15
// 3 и 15 - 02
// 4 и 10 - 12
// 5 и 13 - 13 
// 6 и 16 - 27
// 7 и 11 - 32
// 8 и 14 - 33

}

void loop() {
  // put your main code here, to run repeatedly:
read_touch_pins();
delay(300);
}
