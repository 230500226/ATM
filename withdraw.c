/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 02/07/2023

/************* HEADER FILES ***************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/******** FUNCTIONS (DECLARE/DEFINE) *********/

// Function to withdraw money from the user's account
void Withdraw(Users *user) {
    int amount; // Variable to store the withdrawal amount
    char confirm; // Variable to store the user's confirmation

    system("cls"); // Clears the console screen
    Balance(user); // Displays current balance before the user decides how much
    printf("Enter the amount you would like to withdraw: ");
    scanf("%d", &amount); // Reads the withdrawal amount from the user

    printf("Are you sure you want to withdraw R%d? (y/n): ", amount);
    scanf(" %c", &confirm); // Reads the user's confirmation

    if (confirm == 'y' || confirm == 'Y') { // If the user confirms the withdrawal
        if (amount <= user->balance) { // If the withdrawal amount is less than or equal to the user's balance
            user->balance -= amount; // Updates the user's balance by subtracting the withdrawal amount
            printf("Withdrawal successful. Your new balance is R%d.\n", user->balance); // Prints the new balance
        } else {
            printf("Insufficient funds.\n"); // Prints a message indicating insufficient funds
        }
    } else {
        printf("Withdrawal cancelled.\n"); // Prints a message indicating the withdrawal was cancelled
    }
}