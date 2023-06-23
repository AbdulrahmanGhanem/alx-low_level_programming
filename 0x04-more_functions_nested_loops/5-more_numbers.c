#include "main.h"

/**
 * more_numbers - A C function that prints 10 times numbers from 0 to 14
*/

void more_numbers(void)
{
	int row, c, num;

	for (row = 0; row <= 9; row++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar(49);
				num = c % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
