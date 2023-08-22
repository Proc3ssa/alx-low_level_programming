#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
    int length = 0;
    int start;

    while (str[length])
        length++;

    if (length % 2 == 0)
        start = length / 2;
    else
        start = (length + 1) / 2;

    while (str[start])
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}
