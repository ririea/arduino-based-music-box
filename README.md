# Arduino-Based Music Box

## Project Overview

This project involves designing and building a simple music box using an Arduino Nano as the microcontroller. The infrared sensor module read the presence of the punched holes on a paper strip. The Arduino Nano processes the input signals from the infrared sensor, and the speaker plays the corresponding musical notes.

### Objective

To design and implement an Arduino-based system that uses an infrared sensor to detect holes on a moving paper strip and plays corresponding musical notes through a speaker.

## Components

- 8 × Infrared Sensor Module
- 8 ohm Speaker
- Arduino Nano
- Prototype Board
- Breadboard Pins
- board (for the body)

## Schematic Diagram

## Setup
1. Connect the infrared sensor and speaker to the Arduino Nano according to the diagram (`schematic_diagram.jpg`).  
2. Upload the Arduino sketch (`music_box.ino`) to the Arduino Nano using the [Arduino IDE](https://www.arduino.cc/en/software).  
3. Prepare a paper strip with punched holes corresponding to musical notes.  
4. Move the paper strip past the infrared sensor to play the music.

## Usage
- Move the paper strip steadily past the infrared sensor.  
- The system will detect holes and play the corresponding notes through the speaker.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.md) file for details.
