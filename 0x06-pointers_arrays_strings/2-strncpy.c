#include "main.h"

/**
 * *_strncpy - A C function that copies a string
 *
 * @dest: string input of function
 * @src: string input of function
 * @n: numbers of characters
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
