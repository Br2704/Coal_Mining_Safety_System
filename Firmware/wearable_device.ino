#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>
#include <LiquidCrystal_I2C.h>
#include <MAX30105.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// LCD Setup
LiquidCrystal_I2C lcd(0x27, 20, 4); // I2C address, 20 columns, 4 rows

// MAX30102 Setup
MAX30105 particleSensor;

// DS18B20 Setup
#define ONE_WIRE_BUS 4
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// Buzzer
#define BUZZER_PIN 25

// ADXL345 Setup
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

void setup() {
  Serial.begin(115200);

  // LCD Initialization
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Initializing...");

  // MAX30102 Initialization
  if (!particleSensor.begin(Wire, I2C_SPEED_STANDARD)) {
    lcd.setCursor(0, 1);
    lcd.print("MAX30102 Error");
    while (1);
  }
  particleSensor.setup();

  // DS18B20 Initialization
  sensors.begin();

  // ADXL345 Initialization
  if (!accel.begin()) {
    lcd.setCursor(0, 2);
    lcd.print("ADXL345 Error");
    while (1);
  }

  // Buzzer Setup
  pinMode(BUZZER_PIN, OUTPUT);

  lcd.setCursor(0, 1);
  lcd.print("Initialization OK");
  delay(2000);
}

void loop() {
  // Read MAX30102 data
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Heart Rate: ");
  int heartRate = particleSensor.getHeartRate();
  lcd.print(heartRate);
  lcd.setCursor(0, 1);
  lcd.print("SpO2: ");
  float spo2 = particleSensor.getSpO2();
  lcd.print(spo2, 1);

  // Read DS18B20 data
  sensors.requestTemperatures();
  float bodyTemp = sensors.getTempCByIndex(0);
  lcd.setCursor(0, 2);
  lcd.print("Temp: ");
  lcd.print(bodyTemp, 1);
  lcd.print(" C");

  // Read ADXL345 data
  sensors_event_t event;
  accel.getEvent(&event);
  lcd.setCursor(0, 3);
  lcd.print("Acc X:");
  lcd.print(event.acceleration.x, 1);
  lcd.print(" Y:");
  lcd.print(event.acceleration.y, 1);

  // Check for fall detection (simple threshold example)
  if (abs(event.acceleration.x) > 10 || abs(event.acceleration.y) > 10) {
    digitalWrite(BUZZER_PIN, HIGH); // Trigger alert
    delay(1000);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(1000); // Update every second
}

