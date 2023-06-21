#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: takes the input number.
 *
 * Return: last digit.
*/

int print_last_digit(int n)
{
	int lastDgt;

	if (n < 0)
		lastDgt = (n % 10) * (-1);
	else
		lastDgt = n % 10;
	_putchar(lastDgt + 48);
	return (lastDgt);
}

