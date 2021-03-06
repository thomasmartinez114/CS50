#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Get amount in dollars
// Convert to cents

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("How much is your change: \n");
        // printf("Change is %f\n", dollars);
    }
    while (dollars < 0);

    int cents = round(dollars * 100);
    printf("Your change in cents is: %i\n", cents);

    // Greedy method begins
    // While (quarters can be used)
    //     increase count
    //     decrease amount by quarter
    // While (dimes can be used)
    //     increase count
    //     decrease amount by dime
    //  (etc).
    //  Print number of coins used

    int coins = 0; // Placeholder for coins

    int quarter = 25, dime = 10, nickel = 5, penny = 1;

    // Ints to try to get each coin used separately
    // int quarterSum = 0, dimeSum = 0, nickelSum = 0, pennySum = 0, coinSum = 0;
    // int cents2 = round(dollars * 100);

    // Modulo
    coins = coins + cents / quarter; // coins = 0 + (100 / 25) -> 4
    cents = cents % quarter;         // cents = 100 % 25 -> 0
    // quarterSum = quarterSum + cents2 / quarter;
    // printf("Quarters used: %i\n", quarterSum);

    coins = coins + cents / dime;
    cents = cents % dime;
    // dimeSum = coinSum + cents2 / dime;
    // printf("Dimes used: %i\n", dimeSum);

    coins = coins + cents / nickel;
    cents = cents % nickel;
    // nickelSum = coinSum + cents2 / nickel;
    // printf("Nickels used: %i\n", nickelSum);

    coins = coins + cents / penny;
    cents = cents % penny;
    // pennySum = coinSum + cents2 / penny;
    // printf("Pennies used: %i\n", pennySum);

    printf("I have %i coin(s)\n", coins);

    // Non Modulo method

    // while (cents >= quarter)
    // {
    //     cents = cents - quarter;
    //     coins++;
    //     printf("Quarter used\n");
    // }
    // while (cents >= dime)
    // {
    //     cents = cents - dime;
    //     coins++;
    //     printf("Dime used\n");
    // }
    // while (cents >= nickel)
    // {
    //     cents = cents - nickel;
    //     coins++;
    //     printf("Nickel used\n");
    // }
    // while (cents >= penny)
    // {
    //     cents = cents - penny;
    //     coins++;
    //     printf("Penny used\n");
    // }

    // printf("I have %i coin(s)\n", coins);
}
