#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 */
void print_rev(char *s)
{
    int length = 0;
    int i;

    /* Calculate the length of the string */
    while (s[length] != '\0')
        length++;

    /* Print the string in reverse */
    for (i = length - 1; i >= 0; i--)
        putchar(s[i]);

    /* Print a new line */
    putchar('\n');
}

int main()
{
    char str[] = "Hello, world!";
    print_rev(str);
    return 0;
}
