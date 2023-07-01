/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 01/07/2023

/************* HEADER FILES ***************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "functions.h"

/******** FUNCTIONS (DECLARE/DEFINE) *********/

// Function to deposit money into the user's account
void Deposit(Users *user) {
    int amount; // Variable to store the deposit amount
    char confirm; // Variable to store the user's confirmation

    system("cls"); // Clears the console screen
    Balance(user); // Displays current balance before the user decides how much
    printf("Enter the amount you would like to deposit: ");
    scanf("%d", &amount); // Reads the deposit amount from the user

    if (amount > INT_MAX - user->balance) { // Check if the deposit amount will cause an overflow
        printf("The deposit amount is too large. Only R%d will be processed and the rest will be discarded \n(you can always give that money to me if you want...).\n", INT_MAX - user->balance);
        amount = INT_MAX - user->balance; // Set the deposit amount to the maximum value that can be safely added to the user's balance
    }

    printf("Are you sure you want to deposit R%d? (y/n): ", amount);
    scanf(" %c", &confirm); // Reads the user's confirmation

    if (confirm == 'y' || confirm == 'Y') { // If the user confirms the deposit
        user->balance += amount; // Updates the user's balance by adding the deposit amount
        printf("Deposit successful. Your new balance is R%d.\n", user->balance); // Prints the new balance
    } else {
        printf("Deposit cancelled.\n"); // Prints a message indicating the deposit was cancelled
    }
}