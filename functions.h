#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct User {
    char name[20];
    int pin;
    int balance;
}Users;

int getPin();
void Balance(Users *user);
void Deposit(Users *user);
void Withdraw(Users *user);

#endif
