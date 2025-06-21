# 🚗 Vehicle Control System Simulation (C++)

A console-based application demonstrating core vehicle control logic through object-oriented programming. Simulates real-time monitoring and control of vehicle subsystems.

## ✨ Key Features
- **Engine State Control**: Turn engine ON/OFF with user input
- **Smart Speed Adjustment**: 
  - `G` (Green) → 100 km/h 
  - `O` (Orange) → 30 km/h (activates AC/engine cooling)
  - `R` (Red) → Full stop
- **Automatic Climate Control**:
  - Activates AC when room temperature <10°C or >30°C
  - Maintains optimal cabin temperature (20°C)
- **Engine Temperature Regulation**:
  - Cools engine when temperature >150°C
  - Maintains optimal engine temp (125°C)

## 🛠️ Technical Implementation
- Object-oriented design with `vehicle_control_system` class
- Menu-driven user interface
- State machine architecture
- Real-time system status display

## 🚀 How to Compile & Run
1. **Compile**:
   ```bash
   g++ Vehicle_Control_System.cpp -o vehicle_system -Wall -Wextra
