#ifndef INVERTED_ANALOG_READ_H
#define INVERTED_ANALOG_READ_H

#include <Arduino.h>

// Function to invert analog pins
int invertAnalogPin(int pin) {
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

// Override the default analogRead function
int analogRead(int pin) {
    // Map the pin internally using invertAnalogPin function
    int invertedPin = invertAnalogPin(pin);
    
    // Call the original analogRead function with the inverted pin
    return analogRead(invertedPin);
}

#endif // INVERTED_ANALOG_READ_H
