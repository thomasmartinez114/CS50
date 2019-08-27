// 1 Check one command line arg
// 2 Go through arg to ensure char are digits
// 3 Convert arg: String to Int
// 4 Prompt for plaintext
// 5 Loop through maintaining case sensitivity (if exist)
// 6 Print \n

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    // Prompt user for Plaintext that will be encrypted
    string plain = get_string("Plaintext: ");

    char cipherText[(strlen(plain) + key)];
    // ex) Tommie length + key

    // Run through each letter ASCII
    for (int i = 0; i < strlen(plain); i++)
    {
        // Check if lowercase --- "a" = 97 -- "z" = 122
        if (plain[i] >= "a" && plain[i] <= "z")
        {
            // Print out between lowercase ASCII
            printf("%c", (((plain[i] - "a") + key) % 26) + "a");
        }
        // Check if uppercase "A" = 65 -- "Z" = 90
        else if (plain[i] >= "A" && plain[i] <= "Z")
        {
            // Print out between uppercase ASCII
            printf("%c", (((plain[i] - "A") + key) % 26) + "A");
        }

        cipherText[i] = plain[i] + key;
    }
}

// #include <cs50.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, string argv[])
// {
//     // Validate argument
//     if (argc != 2)
//     {
//         printf("Usage: ./caesar key \n");

//         // Exit
//         return 1;
//     }
//     else
//     {
//         // Converting key to integer
//         int key = atoi(argv[1]);

//         // Pronpt user for plaintext to cipher
//         string encrypt = get_string("Plaintext: ");

//         char cipherText[(strlen(encrypt) + key)];
//         // ex) tommie length + key

//         for (int i = 0; i < strlen(encrypt); i++)
//         {
//             cipherText[i] = encrypt[i] + key;
//         }
//         printf("Ciphertext: %s\n", cipherText);
//     }
// }
