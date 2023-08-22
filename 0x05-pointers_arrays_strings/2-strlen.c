#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    if (s != NULL)
    {
        while (s[length] != '\0')
        {
            length++;
        }
    }

    return length;
}

#endif /* MAIN_H */
