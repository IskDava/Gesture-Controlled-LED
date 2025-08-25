#include <GyverPing.h>

#define HC_TRIG 4
#define HC_ECHO 3
#define LIGHT_PIN 2

GPingSync sonar(HC_TRIG, HC_ECHO);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(HC_TRIG, OUTPUT);
  pinMode(HC_ECHO, INPUT);
}

float getDist(uint8_t trig, uint8_t echo) {
  sonar.ping();

  return sonar.getSmooth();
}

int holding = false;
void loop() {
  // put your main code here, to run repeatedly:
  float dist = getDist(HC_TRIG, HC_ECHO);
  Serial.println(dist);
  if (dist < 1000 && !holding) {
    int state = digitalRead(LIGHT_PIN);
    digitalWrite(LIGHT_PIN, state ? LOW: HIGH);
    holding = true;
  } else if (dist > 1000) {
    holding = false;
  }
  delay(50);
}
