#include "main.h"

void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		_putchar(*(s - 1));
		length--;
		s--;
	}

	_putchar('\n');
}
