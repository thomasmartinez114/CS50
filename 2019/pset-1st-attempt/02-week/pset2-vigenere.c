#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");

        // Exit
        return 1;
    }

    // Pull key - ./caesar [key] from string to int
    int key = atoi(argv[1]);

    // Key needs to be positive
    if (key < 0)
    {
        printf("Key requirement is a Positive Integer!\n");

        return 1;
    }
    else
    {
        // Prompt user for Plaintext that will be encrypted
        string plain = get_string("Plaintext: ");

        //     char cipherText[(strlen(plain) + key)];
        // ex) Tommie length + key

        // Print Ciphered text
        printf("ciphertext: ");

        // Run through each letter ASCII
        for (int i = 0; i < strlen(plain); i++)
        {
            if (islower(plain[i]))
            {
                // 97 equals "a"
                printf("%c", (((plain[i] + key) - 97) % 26) + 97);
            }
            else if (isupper(plain[i]))
            {
                printf("%c", (((plain[i] + key) - 65) % 26) + 65);
            }
            else
            {
                // Console print
                printf("%c", plain[i]);
            }
        } // End loop
        printf("\n");
        return 0;
    }
}
