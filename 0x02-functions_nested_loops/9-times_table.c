#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int rows, x, v;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			v = rows * x;

			if (v <= 9)
				_putchar(' ');
			else
				_putchar((v / 10) + '0');

			_putchar((v % 10) + '0');
		}
		_putchar('\n');
	}
}
