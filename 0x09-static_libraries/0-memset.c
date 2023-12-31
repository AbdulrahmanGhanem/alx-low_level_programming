#include "main.h"

/**
 * *_memset - a C function that fills memory with a constant byte
 *
 * @s: string input
 * @b: char input
 * @n: nums of char replaced
 *
 * Return: string s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
