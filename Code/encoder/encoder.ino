// touch pins
//  1 и 9 - 04
//  2 и 12 - 15
//  3 и 15 - 02
//  4 и 10 - 12
//  5 и 13 - 13
//  6 и 16 - 27
//  7 и 11 - 32
//  8 и 14 - 33

//  int pin_states[16] = {
//     touchRead(4),
//     touchRead(15),
//     touchRead(2),
//     touchRead(12),
//     touchRead(13),
//     touchRead(27),
//     touchRead(32),
//     touchRead(33),
//     touchRead(4),
//     touchRead(12),
//     touchRead(32),
//     touchRead(15),
//     touchRead(13),
//     touchRead(33),
//     touchRead(2),
//     touchRead(27)};

#define pinLed2 25
#define pinLed1 26
#define pinLed4 5
#define pinLed3 23

int getTouchPositionPercentage(int pin_states[])
{
  for (int i = 0; i < 16; i++)
  {
    if (pin_states[i] < 30 && pin_states[i + 1] < 30)
    {
      return map(i, 0, 15, 0, 100);
    }
    else if (i >= 1)
    {
      if (pin_states[i] < 30 && pin_states[i - 1] < 30)
      {
        return map(i, 0, 15, 0, 100);
      }
    }
  }
}

int turnOnLeds(bool led1, bool led2, bool led3, bool led4)
{
  digitalWrite(pinLed2, led1 ? HIGH : LOW);
  digitalWrite(pinLed1, led2 ? HIGH : LOW);
  digitalWrite(pinLed4, led3 ? HIGH : LOW);
  digitalWrite(pinLed3, led4 ? HIGH : LOW);
  return 0;
}

int read_touch_pins(int pin_states[])
{
  for (int i = 0; i < 16; i++)
  {
    Serial.print(pin_states[i]);
    Serial.print(" ");
  }

  Serial.println();
  return 0;
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
}

void loop()
{
  turnOnLeds(true, false, false, false);
  delay(100);
  turnOnLeds(true, true, false, false);
  delay(100);
  turnOnLeds(true, true, true, false);
  delay(100);
  turnOnLeds(true, true, true, true);
  delay(100);
  turnOnLeds(true, false, false, false);

  int pin_states[16] = {
      touchRead(4),
      touchRead(15),
      touchRead(2),
      touchRead(12),
      touchRead(13),
      touchRead(27),
      touchRead(32),
      touchRead(33),
      touchRead(4),
      touchRead(12),
      touchRead(32),
      touchRead(15),
      touchRead(13),
      touchRead(33),
      touchRead(2),
      touchRead(27)};

  Serial.print("State pad:");
  read_touch_pins(pin_states);
  Serial.print(getTouchPositionPercentage(pin_states));
  Serial.println("%");
  delay(500);
}