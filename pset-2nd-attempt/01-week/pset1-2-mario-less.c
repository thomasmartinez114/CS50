// Ask user for number of hashtag height
// If height is less than 1 or greater than 8 (or not an int), go back to step 1
// Number will create the hashtags
//   ex) 2 inserted will create 1 tag, 2 tags
//   https://www.youtube.com/watch?v=Ri4z32bIGNM


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int height;

//     While Loop
//     do
//     {
//       height = get_int("Enter Height of Pyramid between 1 - 8: ");
//       // printf("Height is %i \n", height);
//     } while (height < 1 || height > 8);

    // remove this after testing statically
    int height = 5;

      for (int i = 1; i <= height; i++)
      { // column
        for (int k = 0; k < height - i; k++)
        {
            printf(" ");
        }
          for (int j = 1; j <= i; j++)
          { // row
          printf("#");
          }
          printf("\n");
      }
}

