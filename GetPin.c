#include <stdio.h>
#include <conio.h>
#include "functions.h"

// Function to get the user's PIN
int getPin() {
    int pin = 0; // Variable to store the PIN
    int ch; // Variable to store the input character
    
    printf("Please enter your PIN: ");
    
    while ((ch = getch()) != '\r') { // Reads input characters until the Enter key is pressed ('\r' represents the Enter key)
        if (ch >= '0' && ch <= '9') { // Checks if the input character is a digit
            printf("*"); // Prints an asterisk instead of the actual digit
            pin = pin * 10 + ch - '0'; // Builds the PIN by multiplying the previous digits by 10 and adding the new digit
        }
    }
    
    printf("\n"); // Prints a new line after the PIN is entered
    
    return pin; // Returns the entered PIN
}
