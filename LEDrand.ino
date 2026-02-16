const int NUM_LEDS = 2;
const int ledPins[] = {7, 8};
int ledStates[NUM_LEDS];         // 0 = LOW, 1 = HIGH
unsigned long lastChangeTime[NUM_LEDS];
unsigned long onDurations[NUM_LEDS];
unsigned long offDurations[NUM_LEDS];

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  digitalWrite(led1, random(2));
  digitalWrite(led2, random(2));
  delay(random(100, 1000));
}