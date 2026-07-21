# 4-Servo Sweep and Hold Task

## Description
This project programs 4 servo motors connected to an Arduino Uno to perform the following sequence:
1. Run a sweep motion (0° to 180° and back) for 2 seconds.
2. After 2 seconds, all servos hold steady at 90°.

Built and simulated using Tinkercad Circuits.

## Circuit
- Arduino Uno
- 4x Servo motors
- Breadboard used to share power (5V) and ground (GND) rails across all 4 servos
- Signal wires connected to individual digital pins:
  - Servo 1 → Pin 5
  - Servo 2 → Pin 10
  - Servo 3 → Pin 3
  - Servo 4 → Pin 11

## Live Simulation
(https://www.tinkercad.com/things/7IuPms601wA-servo-sweep-task?sharecode=GnIZnH8daXlNEdt5zd7A9c0fuF9DeUAw4I3ox8kUb5k)

## Code
attached.

## How It Works
- The code uses `millis()` instead of `delay()` to track elapsed time, allowing all 4 servos to move together smoothly during the sweep phase.
- Once 2 seconds have passed, the sketch stops sweeping and commands all servos to hold at 90° permanently.
