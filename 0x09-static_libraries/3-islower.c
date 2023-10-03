#include "main.h"

/**
 * _islower - A function that checks for lowercase character.
 *
 * @c: Checks the input of the function.
 *
 * Return: return 1 if letter is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
