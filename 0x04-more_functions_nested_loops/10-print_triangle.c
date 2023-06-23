#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line.
 *
 * @size: input size of triangle
*/

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1; x <= size; x++)
			{
				if ((x + y) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
