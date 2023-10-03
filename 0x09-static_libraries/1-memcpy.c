#include "main.h"

/**
 * *_memcpy - a C function that copies memory area
 *
 * @dest: string input
 * @src: string input
 * @n: num input
 *
 * Return: string dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
