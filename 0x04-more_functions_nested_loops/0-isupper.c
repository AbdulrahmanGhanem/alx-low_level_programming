#include "main.h"

/**
 * _isupper - A C function that checks for uppercase character.
 *
 * @c: input number of character
 *
 * Return: 1 if character is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
