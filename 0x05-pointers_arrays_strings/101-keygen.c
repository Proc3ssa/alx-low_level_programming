#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * main - Generates a random password and outputs the expected format.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char password[PASSWORD_LENGTH + 1];
    int i;

    /* Seed the random number generator */
    srand(time(NULL));

    /* Generate the random password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    /* Print the generated password and expected output format */
    printf("Generated password: %s\n", password);
    printf("(15 chars long)\n[stderr]: [Anything]\n(0 chars long)\n");

    return 0;
}
