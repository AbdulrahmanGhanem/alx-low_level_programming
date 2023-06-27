#include "main.h"

/**
 * rev_string - A C function that reverses a string.
 *
 * @s: the string input of the function.
*/

void rev_string(char *s)
{
	int i, c = 0;
	char temp;

	while (s[c] != '\0')
		i++;
	for (i = 0; i < c / 2; i++)
	{
		temp = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = temp;
	}
}
