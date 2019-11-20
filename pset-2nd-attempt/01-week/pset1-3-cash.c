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
    } while (dollars < 0);

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

    // Non Modulo method
    // while (cents >= quarter)
    // {
    //     cents -= quarter;
    //     coins++;
    //     printf("Quarter used\n");
    // }
    // while (cents >= dime)
    // {
    //     cents -= dime;
    //     coins++;
    //     printf("Dime used\n");
    // }
    // while (cents >= nickel)
    // {
    //     cents -= nickel;
    //     coins++;
    //     printf("Nickel used\n");
    // }
    // while (cents >= penny)
    // {
    //     cents -= penny;
    //     coins++;
    //     printf("Penny used\n");
    // }

    printf("I have %i coin(s)\n", coins);
}
