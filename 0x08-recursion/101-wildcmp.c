#include "main.h"

/**
 * skip_asterisk - iterates asterisk
 *
 * @s2: second string input
 *
 * Return: pointer past asterisk
 **/

char *skip_asterisk(char *s2)
{
	if (*s2 == '*')
		return (skip_asterisk(s2 + 1));
	else
		return (s2);
}

/**
 * inception - if characters are identical or not
 *
 * @s1: input string
 *@s2: input string
 *
 * Return: 1 if identical, 0 if false
 **/

int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - a function that compares two strings
 *
 *@s1: input string
 @s2: input string
 *
 * Return: 1 if identical, 0 if false
 **/

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*skip_asterisk(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = skip_asterisk(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += inception(s1, s2);
		return (!!r);
	}
	return (0);
}
