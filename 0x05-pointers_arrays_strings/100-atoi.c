#ifndef MAIN_H
#define MAIN_H

int _atoi(char *s);

#endif /* MAIN_H */

#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1; /* Initialize the sign to positive */
    int result = 0;
    int i = 0;

    /* Handle negative sign */
    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }
    /* Handle positive sign or no sign */
    else if (s[0] == '+')
    {
        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            /* Update the result with the digit */
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            /* Stop when non-digit characters are encountered */
            break;
        }
        i++;
    }

    return result * sign;
}
