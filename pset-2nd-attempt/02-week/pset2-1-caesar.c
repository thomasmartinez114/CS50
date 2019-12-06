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
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        // Exit
        return 1;
    }
    int key = atoi(argv[1]);
    printf("The key is: %i\n", key);

    // prompt user for plaintext
    string plaintext = get_string("Plaintext: ");
    printf("%s\n", plaintext);

    for (int i = 0; i < strlen(plaintext); i++)
    {
        string cipher = plaintext[i] + 1;
    }
    printf("%s", cipher);
}
