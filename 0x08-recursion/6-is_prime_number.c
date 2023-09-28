#include "main.h"

/**
 * is_prime_number - a C function that returns 1
 * if the input integer is a prime number, otherwise return 0
 *
 * @n: input number
 * @x: input number
 *
 * Return: 1 if prime, 0 otherwise
*/

int if_prime(int n, int x);
int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

/**
 * if_prime - a C function that checkes if number is prime
 *
 * @n: input number
 * @x: input number
 *
 * Return: 1 if prime, 0 otherwise
*/

int if_prime(int n, int x)
{
	if (n >= 2 && x >= n)
		return (1);
	else if (n % x || n < 2)
		return (0);
	else
		return (if_prime(n, x + 1));
}
