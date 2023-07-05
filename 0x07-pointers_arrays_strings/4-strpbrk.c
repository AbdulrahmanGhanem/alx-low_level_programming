#include "main.h"

/**
 * *_strpbrk - a C function that searches a string for any of a set of bytes
 *
 * @s: string input
 * @accept: string input
 *
 * Return: s pointer if matches, NULL if not
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, k = 0;

	while (s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
				return (&s[i]);
			k++;
		}
		i++;
	}
	return (0);
}
