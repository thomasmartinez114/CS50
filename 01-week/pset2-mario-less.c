#include <cs50.h>
#include <stdio.h>

// int get_positive_int(string prompt);

int main(void)
{
    int height;

    // Loop
    do
    {
        height = get_int("Height of pyramid is: ");
    } while (height == 0 || height < 0 || height > 8);
}
