#include <cs50.h>
#include <stdio.h>

// int get_positive_int(string prompt);

int main(void)
{
    //Prompt user for height of pyramid
    int height = get_int("Height of pyramid: ");

    //Check if the height isn't < 1 || > 8
    if (height < 1 || height > 8)
    {
        printf("Height invalid! Needs to be between 1-8");
    }
    else
    {
        printf("Great! Height will be %i\n", height);
    }
}
