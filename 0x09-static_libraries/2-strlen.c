#include "main.h"

/**
 * _strlen - A C function that returns the length of a string.
 *
 * @s: the string input.
 *
 * Return: the count of the string input characters.
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
