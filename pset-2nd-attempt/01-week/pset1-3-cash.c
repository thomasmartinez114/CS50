#include <stdio.h>
#include <cs50.h>
#include <math.h>

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
}


