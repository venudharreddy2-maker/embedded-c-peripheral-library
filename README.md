
# Embedded C Peripheral Library

A modular embedded firmware project implementing GPIO, hardware timers, interrupts and UART communication using the ATmega328P microcontroller.

**Platform:** Arduino Uno (ATmega328P)  
**Simulation:** Wokwi  
**Language:** C/C++

## Features

- GPIO input and output drivers
- Reusable GPIO functions
- Timer1 in CTC mode
- Timer compare-match interrupts
- UART transmission and reception
- UART receive buffering

## Project Architecture

| Module - Description |

 GPIO   - Digital input and output 
 Timer  - Hardware timer and interrupts 
 UART   - Serial communication 

## Repository Structure


embedded-c-peripheral-library/
├── sketch.ino
├── gpio.h
├── gpio.cpp
├── timer.h
├── timer.cpp
├── uart.h
├── uart.cpp
├── diagram.json
├── README.md
└── LICENSE


## Simulation

Developed and tested using Wokwi.

[Open Wokwi Simulation](https://wokwi.com/projects/480366924850286593)

## Testing Results

- GPIO LED and push-button control: Successful
- Timer1 interrupt: Successful
- UART transmission: Successful
- UART reception and buffering: Successful

## Learning Outcomes

- AVR microcontroller register programming
- Peripheral driver development
- Interrupt-driven programming
- Serial communication
- Modular firmware architecture

## Future Improvements

- UART error handling
- Improved GPIO portability
- Automated testing
- Physical hardware validation

## Author

Venudhar Reddy

Electronics and Communication Engineering Student

Interested in Embedded Systems, Firmware Development, VLSI and Aerospace Electronics.

---

*Firmware developed and tested through simulation. Physical hardware validation has not yet been performed.*
