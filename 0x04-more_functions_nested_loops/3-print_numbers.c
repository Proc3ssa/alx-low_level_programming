#include "main.h"

void print_numbers(void)
{
    char num = '0';

    while (num <= '9')
    {
        _putchar(num);
        num++;
    }

    _putchar('\n');
}
