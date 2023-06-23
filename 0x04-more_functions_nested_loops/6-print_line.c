#include "main.h"

/**
 * print_line - A C function that draws a straight line in the terminal.
 *
 * @n: input number for the function.
*/

void print_line(int n)
{
	if (n > 0)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
