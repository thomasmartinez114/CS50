#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Get amount in dollars
// Convert to cents

int main(void)
{

    int coins = 0; // Placeholder for coins
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

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    while (cents >= 25)
    {
        coins++;
        cents % 25;
    }

    printf("I have %i coin(s)\n", coins);
}
