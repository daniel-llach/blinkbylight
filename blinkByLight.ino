const int ledPin = 13;  // LED connected to digital pin 13
const int sensorPin = 0;  // connect sensor to analog input 0

//
const int minDuration = 100;
const int maxDuration = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int rate = analogRead(sensorPin);
  rate = map(rate, 200, 800, minDuration, maxDuration);
  rate = constrain(rate, minDuration, maxDuration);

  Serial.println(rate);
  digitalWrite(ledPin, HIGH);
  delay(rate);
  digitalWrite(ledPin, LOW);
  delay(rate);
}
