# Gahan-AI PCB Intern Assessment

## Overview

This repository contains the submission for the PCB Designer Intern Assessment.

The project includes:

- STM32G431KBTx based PCB design
- USB Type-C interface
- SWD debugging connector
- I2C sensor interface
- UART sensor interface
- Status LED circuitry
- PCB layout, routing, and Gerber generation
- Embedded C LED blinking program

---

# Task 1 – STM32 USB Sensor Module PCB Design

## Features

- STM32G431KBTx Microcontroller
- USB Type-C USB 2.0 Connector
- SWD Debug Header
- I2C Interface Header
- UART Interface Header
- Status LED
- Decoupling Capacitors
- Pull-up Resistors
- Two-layer PCB Design

## Tools Used

- KiCad
- GitHub

### Note

Standard KiCad symbol libraries and footprint libraries were used for this project. No custom symbol or footprint libraries were created.

## Deliverables Included

- Schematic Design File
- PCB Layout File
- Gerber Files
- Drill Files
- Bill of Materials (BOM)

---

# Task 3 – Embedded C LED Blinking Program

## Objective

To implement an Embedded C program for controlling LED blinking at different predefined speeds in a continuous cycle.

## Features

### Slow Speed Blinking
- 5 seconds ON
- 5 seconds OFF

### Medium Speed Blinking
- 2.5 seconds ON
- 2.5 seconds OFF

### Fast Speed Blinking
- 1 second ON
- 1 second OFF

### Speed Sequence
Slow → Medium → Fast → Repeat

- Each speed mode runs for two complete ON/OFF cycles before switching to the next mode.
- The process runs continuously until power-off.

## Tools Used

- Arduino IDE

## Deliverables Included

- Embedded C Source Code
- Code Comments and Explanation

---

# Repository Structure

```text
Task1_PCB_Design/
│
├── Schematic_Files/
├── PCB_Layout_Files/
├── Gerber_Files/
├── Drill_Files/
├── BOM/
└── Screenshots/

Task3/
│
├── led_blink_speed_control.ino
└── README.md
```

---

# Author

Amogh Purohit
