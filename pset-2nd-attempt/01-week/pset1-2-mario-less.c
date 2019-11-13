// Ask user for number of hashtag height
// If height is less than 1 or greater than 8 (or not an int), go back to step 1
// Number will create the hashtags
//   ex) 2 inserted will create 1 tag, 2 tags

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //     While Loop
    do
    {
        height = get_int("Enter Height of Pyramid between 1 - 8: ");
        // printf("Height is %i \n", height);
    } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
