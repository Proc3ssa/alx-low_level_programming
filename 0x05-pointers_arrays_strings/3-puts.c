#ifndef MAIN_H
#define MAIN_H

void _puts(char *str);

#endif /* MAIN_H */

#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: void
 */
void _puts(char *str)
{
    if (str != NULL)
    {
        int i = 0;

        while (str[i] != '\0')
        {
            write(1, &str[i], 1);
            i++;
        }

        write(1, "\n", 1);
    }
}
