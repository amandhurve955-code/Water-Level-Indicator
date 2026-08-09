# Water-Level-Indicator
An Arduino Uno reads conductive water probes to track tank levels in real time.  Digital signals detect water height at Low, Medium, and Full thresholds.  Status is shown live on a 16x2 LCD display alongside color-coded LEDs.  A piezo buzzer sounds an alarm at maximum capacity to prevent overflow.

**Name:** AMAN DHURVE  
**Company:** CODTECH IT SOLUTIONS  
**ID:** CITS6427  
**Domain:** EMBEDDED SYSTEM  
**No. of Weeks:** 6 WEEKS  

## Overview
The **Water Level Indicator** is an embedded system project designed to measure and monitor liquid levels in tanks or reservoirs in real-time. The system detects liquid height using conductive probes and provides live visual and audible status feedback via color-coded LEDs, a 16x2 LCD screen, and a piezo buzzer.

## Circuit Diagram
<img width="1140" height="968" alt="Circuit Diagram 4" src="https://github.com/user-attachments/assets/4ce3bf2e-ddb2-4860-844b-66bbba974dba" />

## Features
* **Multi-Level Monitoring:** Real-time tracking of water levels (Low, Medium, Full).
* **Dual Visual Output:** Color-coded LEDs (Red, Yellow, Green) and live status updates on a 16x2 LCD.
* **Audio Overflow Alert:** Integrated piezo buzzer alarm triggered when the tank reaches full capacity.
* **Low-Power & Efficient:** Simple digital pin reading logic for minimal energy consumption.
  
## Components Used
* **Arduino Uno R3** (Microcontroller Board)
* **Conductive Water Probes / Sensor Wires**
* **16x2 Character LCD Display**
* **LEDs:** Red (Low), Yellow (Medium), Green (Full)
* **Piezo Buzzer** (Overflow Alarm)
* **10kΩ Potentiometer** (Contrast Control)
* **Resistors:** 220Ω (LEDs/Backlight), 10kΩ (Pull-down Resistors)
* **Breadboard & Jumper Wires**
* **USB Cable** (Power Supply and Sketch Programming)

## Technologies Used
* **Embedded C++ / Arduino Language**
* **Arduino IDE** (Firmware Compilation & Uploading)
* **Tinkercad Circuits / Proteus** (Circuit Simulation Platform)

## Working Principle
1. **Conduction Sensing:** A common 5V wire at the bottom of the tank supplies voltage. As water rises, it connects to level-specific probes via conduction.
2. **Signal Detection:** Arduino reads digital HIGH signals on input pins as water reaches each probe.
3. **Logic Processing:**
   * **Low Water:** Red LED turns ON $\rightarrow$ LCD displays `"Status: LOW"`.
   * **Medium Water:** Yellow LED turns ON $\rightarrow$ LCD displays `"Status: MEDIUM"`.
   * **Full Tank:** Green LED turns ON, Piezo Buzzer sounds $\rightarrow$ LCD displays `"Status: OVERFLOW!"`.
4. **Output Rendering:** Processed readings continuously update on the LCD screen and LED indicators.

## Skills Demonstrated
* Digital input sensing and pull-down resistor circuit configuration.
* Interfacing multiple output peripherals (LEDs, LCD, Buzzer) on an Arduino Uno.
* State-machine conditional logic implementation in embedded C++.
* Circuit prototyping, wiring, and simulation testing.

## Applications
* Overhead domestic water tank level monitoring.
* Industrial chemical storage or liquid vessel tracking.
* Automated irrigation and reservoir management systems.

## Future Improvements
* **Automatic Pump Control:** Integrating a relay module to automatically control the water motor pump.
* **IoT Wireless Monitoring:** Adding an ESP8266 or ESP32 module for smartphone cloud monitoring.
* **Contactless Sensor:** Upgrading to a waterproof ultrasonic sensor (JSN-SR04T) to eliminate probe corrosion.

## Skills Gained
* Practical understanding of conductive liquid switching mechanisms.
* GPIO pin control and display peripheral integration.
* Designing automated feedback and alarm systems in embedded systems.
