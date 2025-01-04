# IoT-Based Coal Mining Workers' Health and Safety Monitoring System

## Overview

This project aims to ensure the safety and health of coal mining workers by combining wearable health monitoring devices and hazardous condition detection systems. The system monitors vital health parameters, detects environmental hazards, and provides real-time alerts.

## Features

## 1. Wearable Health Monitoring Device:
Tracks workers' heart rate, SpO2, and body temperature.
Detects falls and abnormal movements.
Displays data on a 20x4 I2C LCD screen.

## 2. Hazardous Condition Detection System:
Monitors air quality, LPG leaks, carbon monoxide levels, and flame detection.
Measures ambient temperature and humidity.
Triggers a buzzer for unsafe conditions.

## Project Structure

|-- wearable_device.ino               # Firmware for wearable device
|-- hazardous_condition_detection.ino # Firmware for hazardous condition detection
|-- ComponentDetails.md               # Details about components used
|-- CircuitDiagram1.png               # Wearable device circuit diagram
|-- CircuitDiagram2.png               # Hazard detection system circuit diagram
|-- README.md                         # Project description and usage

## How It Works

1. Wearable Health Monitoring Device

## Components Used:

MAX30102, ADXL345, DS18B20, LCD 20x4, Buzzer, ESP32.
The device continuously monitors the worker's health metrics and displays them on the LCD.
If a fall is detected or health metrics exceed critical thresholds, a buzzer sounds an alert.

2. Hazardous Condition Detection System

## Components Used:

MQ135, MQ6, MQ7, DHT22/11, Flame Sensor, Buzzer, ESP32.
Monitors air quality, LPG and CO levels, ambient temperature, and fire hazards.
Alerts workers and operators in real-time if conditions are unsafe.

## Setup and Usage

## Step 1: Assemble the Hardware
Follow the circuit diagrams to connect the components to the ESP32 for both devices.
Ensure proper wiring for sensors, LCD, and buzzer.

## Step 2: Upload the Firmware
Open the wearable_device.ino file in the Arduino IDE and upload it to the ESP32 for the wearable device.
Open the hazardous_condition_detection.ino file in the Arduino IDE and upload it to the ESP32 for the hazardous condition detection system.
Select the correct COM port and board settings in the Arduino IDE before uploading.

## Step 3: Power Up the Devices
Use a battery or USB power supply for the ESP32 modules.
Verify the LCD and sensors are functioning correctly.

## Step 4: Monitor Data
For the wearable device, check the LCD screen for real-time health parameters.
For the hazard detection system, monitor the serial output or respond to buzzer alerts.

## How to Use

## Wearable Device:

Workers should wear the device with the sensors positioned correctly (e.g., MAX30102 on the fingertip or wrist).
Monitor the LCD for real-time updates.

## Hazard Detection System:

Place the system in the mining area to monitor environmental conditions.
Respond promptly to buzzer alerts indicating hazardous conditions.

## Complete Setup


## Future Improvements

Integrate IoT to send alerts to a central server or mobile app.
Add GPS for precise worker tracking and location-based alerts.
Include more advanced sensors for enhanced safety.

## Contributing

Contributions are welcome! Please submit issues or pull requests for suggestions or improvements.

## License

This project is licensed under the MIT License. See the LICENSE file for details.
