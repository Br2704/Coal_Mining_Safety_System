#include <DHT.h>

// Sensor Pins
#define MQ135_PIN 34
#define MQ6_PIN 35
#define MQ7_PIN 36
#define FLAME_PIN 26
#define DHT_PIN 4

// DHT Sensor Type
#define DHTTYPE DHT22
DHT dht(DHT_PIN, DHTTYPE);

// Buzzer
#define BUZZER_PIN 25

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(FLAME_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Read MQ135 (Air Quality)
  int airQuality = analogRead(MQ135_PIN);
  Serial.print("Air Quality: ");
  Serial.println(airQuality);

  // Read MQ6 (LPG Gas)
  int lpgGas = analogRead(MQ6_PIN);
  Serial.print("LPG Gas: ");
  Serial.println(lpgGas);

  // Read MQ7 (CO Gas)
  int coGas = analogRead(MQ7_PIN);
  Serial.print("CO Gas: ");
  Serial.println(coGas);

  // Read Flame Sensor
  int flame = digitalRead(FLAME_PIN);
  Serial.print("Flame: ");
  Serial.println(flame);

  // Read DHT22 (Temperature and Humidity)
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Trigger Buzzer for Hazardous Conditions
  if (airQuality > 300 || lpgGas > 400 || coGas > 300 || flame == LOW) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(1000);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(2000); // Update every 2 seconds
}

