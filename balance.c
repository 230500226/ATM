/************* AUTHOR INFO **************/
// Name: [Author Name]
// Student No.: [Student Number]
// Course Title: [Course Title]
// Date: [Current Date]

/************* HEADER FILES ***************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

/************* GLOBAL VARIABLES ************/
// Declare global variables here (if any)

/******** FUNCTIONS (DECLARE/DEFINE) *********/
// Function to display the user's balance
void Balance(Users *user) {
    system("cls"); // Clears the console screen
    printf("Your current balance is R%d.\n", user->balance); // Prints the user's current balance
}