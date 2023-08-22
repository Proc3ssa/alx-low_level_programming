#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function reverses the characters in a string.
 * It modifies the string in place.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Swap characters from start to middle */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
