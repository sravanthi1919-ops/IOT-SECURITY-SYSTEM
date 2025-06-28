const int pirPin = 2;
const int alarmLedPin = 8;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(alarmLedPin, OUTPUT);
  digitalWrite(alarmLedPin, LOW);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    Serial.println("ALERT: Motion detected!");
    Serial.println("Image captured.");
    digitalWrite(alarmLedPin, HIGH);
    delay(5000);
    digitalWrite(alarmLedPin, LOW);
    delay(200);
  }
}
