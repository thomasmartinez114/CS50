// list the includes abc order
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void spellName(string name)
{
    //     print name regular
    //     for (int letter = 0, length = strlen(name); letter < length; letter++)
    //     {
    //         printf("%c\n", name[letter]);
    //     }

    //     print name backwards
    for (int letter = strlen(name) - 1; letter >= 0; letter--)
    {
        printf("%c\n", name[letter]);
    }
}

int main(void)
{
    //     int age = 42;
    //     printf("%i\n", age);
    string name = get_string("Hi, what's your name?\n");
    printf("Hello, %s!\n", name);
    spellName(name);

    //     Age if statements
    int age = get_int("How old are you?\n");
    if (age < 18)
    {
        printf("you're not legal. go away!\n");
        return 0; // will make it exit once it runs so doesn't go through rest of conditions
    }
    if (age < 35)
    {
        printf("You're washed up!\n");
        return 0;
    }
    if (age < 65)
    {
        printf("Get ready for retirement.\n");
        return 0;
    }
    if (age >= 65)
    {
        printf("How's bingo night?\n");
        return 0;
    }
}
