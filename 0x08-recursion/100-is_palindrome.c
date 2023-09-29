#include "main.h"

/**
 * index - counts the last index of string
 *
 * @s: input string
 *
 * Return: number of string index chararcters
 **/

int is_palindrome(char *s);
int check(char *s, int st, int end, int equal);
int index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - checks if a string is palindrome or not
 *
 * @s: input string
 *
 * Return: integer
 **/

int is_palindrome(char *s)
{
	int end = index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checking character for palindrome
 *
 * @s: input string
 * @st: number of string
 * @end: number of string
 * @equal: interger to check equal
 *
 * Return: 0 or 1
 **/

int check(char *s, int st, int end, int equal)
{
	if ((st == end && equal != 0) || (st == end + 1 && equal == 0))
		return (1);
	else if (s[st] != s[end])
		return (0);
	else
		return (check(s, st + 1, end - 1, equal));
}
