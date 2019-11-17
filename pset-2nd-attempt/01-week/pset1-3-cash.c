#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

float change;

do
{
    change = get_float("How much is your change: \n");
    printf("Change is %f\n", change);
}
while (change < 0);
}
