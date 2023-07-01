/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 02/07/2023
/************* HEADER FILES ***************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
#include <conio.h>
/************* GLOBAL VARIABLES ************/
//username, pin, ballance
Users user = {"card123", 1234, 25000};
/******** FUNCTIONS (DECLARE/DEFINE) *********/
/************* MAIN FUNCTION**************/
int main() {
    char name[20];
    int pin;
    int choice;
    int incorrect_attempts = 0; // Variable to store the number of incorrect pin attempts
    
    printf("Please insert your card (enter your name (card123)): ");
    scanf("%s", name);

    if (strcmp(name, user.name) == 0) {
        while (incorrect_attempts < 3) { // Allow up to 3 incorrect pin attempts
            pin = getPin();

            if (pin == user.pin) {
                do {
                    printf("Menu:\n1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            Balance(&user);
                            break;
                        case 2:
                            Deposit(&user);
                            break;
                        case 3:
                            Withdraw(&user);
                            break;
                        case 4:
                            printf("Ejecting card...\n");
                            break;
                        default:
                            printf("Invalid choice.\n");
                    }
                } while (choice != 4);
                break; // Exit the while loop after successful login
            } else {
                incorrect_attempts++; // Increment the number of incorrect attempts
                system("cls");
                printf("Incorrect pin please try again.\n");
                printf("Attemps remaining: %d\n", 3-incorrect_attempts); //Amount of attempt remaining
            }
        }
        if (incorrect_attempts == 3) { // If the user has made 3 incorrect attempts
            printf("You have entered an incorrect pin %d times. ejecting card...\n", incorrect_attempts);
        }
    } else { // If the incorrect card is used
        system("cls");
        printf("Invalid card ejecting card...\n");
    }

    return 0;
}
