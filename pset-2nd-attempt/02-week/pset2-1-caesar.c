// Check program was run with command line
// Iterate over the arugment to make sure all char are digits
// Convert that command line argument from a string to an int
// Prompt user for plaintext
// Iterate over each char of the plaintext:
//     1) if it is uppercase letter, rotate it, saving the case, then print out rotated char
//     2) if it is lowercase letter, rotate it, saving the case, then print out the rotated char
//     3) if it is neither, print out the char as is
// Print a newline

// Check program was run with command line
// Iterate over the arugment to make sure all char are digits
// Convert that command line argument from a string to an int
// Prompt user for plaintext
// Iterate over each char of the plaintext:
//     1) if it is uppercase letter, rotate it, saving the case, then print out rotated char
//     2) if it is lowercase letter, rotate it, saving the case, then print out the rotated char
//     3) if it is neither, print out the char as is
// Print a newline

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Success\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}

// #include <cs50.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int main(int argc, string argv[])
// {
//     if (argc == 2)
//     {
//         //      printf("Success\n");
//         //      printf("%s\n", argv[1]);
//         int k = atoi(argv[1]);
//         printf("%i\n", k);
//     }
//     else
//     {
//         printf("Usage: ./caesar key\n");
//         return 1;
//     }
//     string plaintext = get_string("Plaintext: ");

//     string cipher = "";

//     for (int i = 0; i < strlen(plaintext); i++)
//     {
//         printf("Hi");
//     }
// }