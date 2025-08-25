# Gesture-Controlled-LED
LED switching on and of with gestures

## Requirements

- Arduino board (testedon nano) + data cabel
- 1 LED
- 2 resistors
- Wires (7+)
- Distance meter
- Breadboard

## Schema

1. PLug Arduino board, distance meter and LED onto bread board.
2. Connect VCC of the distance meter to 5V (with wire), GND to GND on Arduino, ECHO to D3 and TRIG to D4.
3. Connect the `+` (longest pin) to the D2 through a **RESISTOR** (NOT a wire) and `-` to GND on the Arduino pin.
4. Copy & Paste main.ino to your Arduino IDE and run the code!
5. Try waving your hand over the distance meter!