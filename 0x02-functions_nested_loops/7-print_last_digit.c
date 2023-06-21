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
		n = n * (-1);
	lastDgt = n % 10;
	return (lastDgt);
}

