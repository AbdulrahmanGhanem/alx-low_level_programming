#include "main.h"

/**
 * print_diagonal - A C function that draws a diagonal line on the terminal.
 *
 * @n: input of function.
*/

void print_diagonal(int n)
{
	int x, s;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (s = 0; s < x; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
