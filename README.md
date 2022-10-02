# LoRaTutorial

Learn how to send and receive with LoRa!
Learn how to pull data from sensors!

Do this with a partner

Libraries needed:
Adafruit MAX31855 library from the Arduino library manage
https://github.com/sandeepmistry/arduino-LoRa

# Parts
1. `part1` learn to send and receive "Hello World" with LoRa 
    - Objective: send "Hello World" to a friends  
    - learn how to read documentation and examples
    - learn how to compile on arduino
2. `part2` learn to send and recieve dynamic sets of data using bytearrays
    - Objective: send custom input string to friends
    - learn how to work with bytearrays
    - learn how to work with serial input
3. `part3` learn to pull and send sensor data over LoRa
    - pull data from thermocouple
        - learn how to add custom libraries to arduino
        - learn how to add custom headers and using them to arduino
    - send a custom packet to a friend
    - learn how to serialize and deserialize packets

# Setup
1. Have github desktop/git cli
2. Have Arduino IDE
3. Clone github
4. Download zip of sandeep mistry's github and add it to libraries (Sketch -> Include Library -> add .ZIP library) 
5. zip lorautils and add it as a library as well (`#include <lorautils.h>`)