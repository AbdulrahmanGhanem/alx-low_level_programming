#include "main.h"

/**
 * _sqrt_recursion - a C function that returns
 * the natural square root of a number
 *
 * @n: input number
 *
 * Return: rooted number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_root(n, 0));
}

/**
 * sqrt_root - a C function that gives square root of number
 *
 * @n: input number
 * @x: input number
 *
 * Return: value of square root
*/

int sqrt_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	return (sqrt_root(n, x + 1));
}
