📋 Component Details:

This document provides an overview of the components used in the IoT-Based Coal Mining Workers' Health and Safety Monitoring System. Each component's purpose, technical details, and usage in the project are described below.

1. MAX30102 (Heart Rate and SpO2 Sensor) ❤️🩺

Purpose:
Measures heart rate and blood oxygen saturation (SpO2).

Key Features:
Integrated pulse oximeter and heart rate monitor.
Low power consumption for wearable applications.

Usage in Project:
Tracks workers' heart rate and SpO2 levels in real time.
Provides health insights to prevent emergencies.

2. ADXL345 (Accelerometer) 📈🛑

Purpose:
Detects movement and orientation changes.

Key Features:
Measures acceleration in X, Y, and Z axes.
High resolution (13-bit) and low power consumption.

Usage in Project:
Detects sudden falls or abnormal movements of workers.
Triggers alerts for potential accidents.

3. DS18B20 (Temperature Sensor) 🌡️

Purpose:
Monitors body temperature.

Key Features:
Digital sensor with 9-12 bit resolution.
Operates over a wide temperature range (-55°C to +125°C).

Usage in Project:
Tracks workers' body temperature to identify health anomalies.

4. LCD 20x4 (I2C) 🖥️

Purpose:
Displays real-time data such as heart rate, SpO2, and temperature.

Key Features:
20 columns and 4 rows for text display.
I2C interface for easy wiring.

Usage in Project:
Provides a user-friendly interface for workers to view health data.

5. MQ135 (Air Quality Sensor) 🌬️🛡️

Purpose:
Detects harmful gases and pollutants in the environment.

Key Features:
Sensitive to NH3, NOx, alcohol, benzene, smoke, and CO2.
Analog and digital output.

Usage in Project:
Monitors air quality in mining areas to ensure safety.

6. MQ6 (LPG Gas Sensor) 🔥🛢️

Purpose:
Detects LPG gas leaks.

Key Features:
High sensitivity to LPG, propane, and isobutane.
Fast response time.

Usage in Project:
Identifies potential LPG leaks to prevent explosions.

7. MQ7 (Carbon Monoxide Sensor) ☠️🛡️

Purpose:
Detects carbon monoxide levels.

Key Features:
High sensitivity to CO.
Can measure concentrations between 10 ppm and 10,000 ppm.

Usage in Project:
Warns workers of unsafe CO levels in the environment.

8. DHT22/11 (Temperature and Humidity Sensor) 🌡️💧

Purpose:
Measures environmental temperature and humidity.

Key Features:
DHT22: Higher accuracy and range compared to DHT11.
Digital signal output.

Usage in Project:
Monitors ambient temperature and humidity in the mine.

9. Flame Detection Sensor 🔥🚨

Purpose:
Detects fire or flames in the environment.

Key Features:
Sensitive to IR wavelengths of 760nm–1100nm.
Fast response time.

Usage in Project:
Identifies fire hazards to initiate timely evacuation.

10. ESP32 (Microcontroller) 🤖📡

Purpose:
Serves as the core processing unit for both the wearable and hazardous condition detection systems.

Key Features:
Dual-core processor with Wi-Fi and Bluetooth capabilities.
Low power consumption and high performance.

Usage in Project:
Collects, processes, and transmits data from sensors.
Provides connectivity for remote monitoring.

11. Buzzer 🔊⚠️

Purpose:
Provides audible alerts in case of emergencies.

Key Features:
Compact size.
Operates on low power.

Usage in Project:
Alerts workers to critical health or environmental issues.
