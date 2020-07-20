#include <stdio.h>

void createBox(int height, int width);

void main(void)
{
    createBox(3, 4);
}

void createBox(int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
