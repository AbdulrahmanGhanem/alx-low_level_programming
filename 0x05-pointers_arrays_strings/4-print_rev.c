#include "main.h"

/**
 * print_rev - A C function that prints a string, in reverse
 *
 * @s: input of the function
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
