#include <REGX51.H>  // AT89C51 header file

void main() {
    // Configure Ports
    P0 = 0xFF;  // Make P0 inputs (especially P0.0)
    P2 = 0xFF;  // Optional: Initialize P2 output (all HIGH)

    while (1) {
        if (P0_0 == 0) {   // Button pressed (assuming active LOW)
            P2_0 = 0;      // LED ON (active LOW connection)
        } else {
            P2_0 = 1;      // LED OFF
        }
    }
}