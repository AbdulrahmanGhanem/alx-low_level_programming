#include "main.h"

/**
 * _strcmp - A C function that compares two strings
 *
 * @s1: string input
 * @s2: string input
 *
 * Return: e
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, e = 0;

	while (s1 != '\0' && s2 != '\0')
	{
		if (s1[i] != s2[i])
		{
			e = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (e);
}
