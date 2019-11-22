#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Prompt for credit card number
// Return whether its AMEX, VISA, MASTERCARD or INVALID
// get_long not get_int

int main(void)
{
    long cardNumber;

    cardNumber = get_long("Enter your card number: ");
    printf("Card number is: %ld\n", cardNumber);
}
