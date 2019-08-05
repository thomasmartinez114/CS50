#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    do
    {
        dollars = get_float("How much is your change?: ");
    } while (dollars <= 0);
    {
        // Print out the input into currency format
        //  printf("The change is $%.2f\n", dollars);

        // Convert the input to pennies
        int cents = round(dollars * 100);
        printf("The change in Pennies is %i\n", cents);
    }
}
