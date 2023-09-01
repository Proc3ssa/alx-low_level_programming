#include <stdio.h>  // Include the standard input/output library header

void _puts(char *str);  // Declare the _puts function before using it

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _puts("\"Programming is like building a multilingual puzzle");  // Call _puts function
    return (0);
}

// Define the _puts function
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);  // Output each character
        str++;
    }
    putchar('\n');  // Output a newline character after the string
}
