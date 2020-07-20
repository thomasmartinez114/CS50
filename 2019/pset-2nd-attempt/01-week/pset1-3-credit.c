#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Prompt for credit card number
// Return whether its AMEX, VISA, MASTERCARD or INVALID
// get_long not get_int
// Card number beginnings:
// AMEX: 34 or 37
// MASTERCARD: 51 - 55
// VISA: 4

int main(void)
{
    long cardNumber;

    cardNumber = get_long("Enter your card number: ");
    // printf("Card number is: %ld\n", cardNumber);
    int card2 = scanf("%2ld", &cardNumber);
    printf(card2);

    //     for (var cardDigits = 0; cardDigits < cardNumber.length; cardDigits++)
    //     {
    //         if (cardNumber)
    //     }
}
