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

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check for 2 args
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        // printf("Success\n%i\n", k);
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }

    // Get encryption input from user
    string encrypt = get_string("plaintext: ");

    // String length
    for (int i = 0; i < strlen(encrypt); i++)
    {
        printf("%c", encrypt[i] + 1);
    }
}
