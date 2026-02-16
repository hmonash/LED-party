# LEDrand - LED Party

This project is a simple Arduino sketch designed to create a "party" effect with two LEDs by making them blink randomly.

## Features
*   **Random Blinking:** Two LEDs connected to specified pins will blink on and off at random intervals.
*   **Variable Delays:** Each blink cycle includes a random delay between 100 and 1000 milliseconds, ensuring an unpredictable and dynamic light show.
*   **Hardware Setup:** Designed for basic Arduino boards and two standard LEDs.

## Hardware Requirements
*   An Arduino board (e.g., Arduino Uno, Nano, etc.)
*   Two LEDs
*   Two current-limiting resistors (typically 220 Ohm to 1k Ohm, depending on your LEDs)
*   Jumper wires
*   A breadboard (optional, for easier prototyping)

## Wiring
Connect your LEDs to digital pins 7 and 8 of your Arduino board. Ensure you use appropriate current-limiting resistors in series with each LED.

## How to Use
1.  **Open the Sketch:** Open the `LEDrand.ino` file in the Arduino IDE.
2.  **Select Board and Port:** Go to `Tools > Board` and select your Arduino board. Then, go to `Tools > Port` and select the serial port your Arduino is connected to.
3.  **Upload:** Click the "Upload" button (right arrow icon) in the Arduino IDE to compile and upload the sketch to your Arduino board.
4.  **Enjoy the Party!** The LEDs should start blinking randomly.

## Video Demonstration
[Video Demonstration](IMG_1636.MOV)

