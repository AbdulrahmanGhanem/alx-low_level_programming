#include "main.h"

/**
 * print_diagonal - A C function that draws a diagonal line on the terminal.
 *
 * @n: input of function.
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int x, s;

		for (x = 0; x < n; x++)
		{
			for (s = 0; s < x; s++)
				_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
