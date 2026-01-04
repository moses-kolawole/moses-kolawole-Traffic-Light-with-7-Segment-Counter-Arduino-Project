# Traffic Light with 7-Segment Counter – Arduino Project

## Overview
This project simulates a traffic light system using red, yellow, and green LEDs. A one-digit 7-segment display counts seconds for each traffic light phase, demonstrating sequencing and timing in Arduino projects.

## Objective
- Learn to control multiple digital outputs simultaneously
- Understand traffic light sequencing and timing logic
- Display numeric countdowns on 7-segment displays
- Gain experience integrating LEDs and displays in a single project

## Components Used
- Arduino Uno
- Red LED
- Yellow LED
- Green LED
- 1-Digit 7-Segment Displays
- 220Ω resistors
- Breadboard
- Jumper wires
- 9V Battery
- 9V Battery Clip to DC Barrel Jack

## Circuit Diagram
![Circuit Diagram](images/)

## How It Works
1. Each traffic light LED (red, yellow, green) is connected to a separate Arduino pin.  
2. Two 7-segment displays are connected to pins 7–13 and show the countdown for each light phase.  
3. The program cycles through the traffic light sequence:  
   - Red LED ON → Countdown 0–9 on displays  
   - Yellow LED ON → Countdown 0–9  
   - Green LED ON → Countdown 0–9  
4. For each number, the 7-segment display is updated by writing HIGH/LOW to the appropriate segment pins.  
5. The LEDs are switched ON/OFF in sync with the countdown to simulate a real traffic light system.  
6. The `delay()` function determines the duration of each phase. The sequence repeats continuously.

## Code
The Arduino sketch for this project is located in the [code/ directory](code/traffic_light_system_project_on_17th_october_2025.ino
).

## Demo Video
A demonstration video showing the working project is included in this repository.

📹 **Project Demonstration:**  
[Click here to watch/download the demo video](video/traffic_light_project_video.mp4)

*(If the video does not preview directly on GitHub, please download it using the link above.)*

## Reflection (What I Learned)
- How to implement sequential control of multiple outputs
- How to integrate a 7-segment display with LED logic
- Timing and sequencing in Arduino projects
- Importance of mapping pins correctly for hardware control

## Challenges Faced
- Wiring multiple pins for two 7-segment displays without conflicts
- Coordinating LED phases with numeric countdown
- Ensuring smooth transitions between traffic light phases

## Possible Improvements
- Use PWM to fade LEDs for smoother transitions
- Implement a longer countdown for each light
- Add pedestrian crossing button functionality

## Project Status
Completed
