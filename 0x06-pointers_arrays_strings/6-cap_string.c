#include "main.h"

/**
 * lower - a function that checks if char is lower
 *
 * @c: char input
 *
 * Return: 1 if true, 0 if false
*/

int lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * delimiter - a function that checks if char is delimiter
 *
 * @c: char input
 *
 * Return: 1 if true, 0 if false
*/

int delimiter(char c)
{
	int i;
	char del[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == del[i])
			return (1);
	}
	return (0);
}

/**
 * *cap_string - a C function that capitalizes all words of a string
 *
 * @s: string input
 *
 * Return: char
*/

char *cap_string(char *s)
{
	char *p = s;
	int fDel = 1;

	while (*s)
	{
		if (delimiter(*s))
			fDel = 1;
		else if (lower(*s) && fDel)
		{
			*s -= 32;
			fDel = 0;
		}
		else
			fDel = 0;
		s++;
	}
	return (p);
}
