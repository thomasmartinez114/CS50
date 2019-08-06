#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Get amount in dollars
// Convert to cents
// while (quarters can be used)
//     increase count
//     decrease amount by a quarter
// while (dimes can be used)
//     increase count
//     decrease amount by a dime
//  (etc)
//  print number of coins used
//  Can use modulo to do this
//  Example: 50 % 49 = 1
//      49 goes into 50 once and 1 is remaining
//   53 % 50 = 3

int main(void)
{
    float dollars;

    do
    {
        dollars = get_float("Dollar amount: $");
    } while (dollars < 0.0);

    int totalCents = roundf(dollars * 100);
    printf("Total amount cents = %i\n", totalCents);

    int sum = 0;
    // Count of Quarters
    while (25 <= totalCents)
    {
        sum++;
        totalCents -= 25;
    }

    printf("I have %i coin(s)\n", sum);
}
