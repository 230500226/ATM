#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

// Function to display the user's balance
void Balance(Users *user) {
    system("cls"); // Clears the console screen
    printf("Your current balance is R%d.\n", user->balance); // Prints the user's current balance
}
