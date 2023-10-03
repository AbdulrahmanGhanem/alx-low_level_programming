#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n: take integer type input for the function.
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
