#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n: Checks the input of the function.
 *
 * Return: return 1 and prints + if n is greater than zero
 *		   return 0 and prints 0 if n is zero
 *		   return -1 and prints - if n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
