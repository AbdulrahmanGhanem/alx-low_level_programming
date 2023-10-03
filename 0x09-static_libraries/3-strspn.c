#include "main.h"

/**
 * _strspn - a C function that gets the length of a prefix substring
 *
 * @s: string input
 * @accept: string input
 *
 * Return: i nums of chars
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != s[i]; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (i);
}
