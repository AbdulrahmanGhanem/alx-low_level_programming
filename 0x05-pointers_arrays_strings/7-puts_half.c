#include "main.h"

/**
 * puts_half - A C function that prints half of a string
 *
 * @str: input string of the function
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
