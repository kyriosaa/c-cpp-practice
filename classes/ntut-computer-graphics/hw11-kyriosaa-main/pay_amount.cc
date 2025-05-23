//Class: Computer Programming II
//Author: Purit Hongjirakul
//ID: 109990016
//Date: 9/28/2021
//Purpose: This function determines the smallest number of $20, $10, $5, $1 bills necessary to pay the amount represented by the dollars parameter
//Change History: 

#include <stdio.h>

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones);

int main(void) {

    int money = 0, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &money);
    pay_amount(money, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones) {

    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    *ones = dollars % 5;
}