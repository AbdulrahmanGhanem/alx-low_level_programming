#include "main.h"

/**
 * _puts - A C function that prints a string, followed by a new line
 *
 * @str: input of string of function
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
