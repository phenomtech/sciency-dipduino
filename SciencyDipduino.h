#ifndef SCIENCY_DIPDUINO_H
#define SCIENCY_DIPDUINO_H

#include <Arduino.h>

// Function to invert analog pins
int getAnalogPin(int pin) {
	
    switch (pin) {
        case A0: return A5;
        case A1: return A4;
        case A2: return A3;
        case A3: return A2;
        case A4: return A1;
        case A5: return A0;
        default: return pin; // Return the same pin if not an analog pin
    }
}

#endif // SCIENCY_DIPDUINO_H
