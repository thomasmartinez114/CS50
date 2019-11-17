#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Get amount in dollars
// Convert to cents
// While (quarters can be used)
//     increase count
//     decrease amount by quarter
// While (dimes can be used)
//     increase count
//     decrease amount by dime
//  (etc).
//  Print number of coins used

int main(void)
{

    int coins; // Placeholder for coins
    float dollars;
    do
    {
        dollars = get_float("How much is your change: \n");
        // printf("Change is %f\n", dollars);
    } while (dollars < 0);

    int cents = round(dollars * 100);
    printf("Your change in cents is: %i\n", cents);

    // printf("I have %i coin(s)\n", coins);
}
