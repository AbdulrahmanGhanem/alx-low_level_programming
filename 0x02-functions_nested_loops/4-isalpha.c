#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character.
 *
 * @c: Checks the input of the function.
 *
 * Return: return 1 if c is a letter lower or upper, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
