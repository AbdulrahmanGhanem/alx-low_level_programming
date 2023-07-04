#include "main.h"

/**
 * *_strncat - A C function that concatenates two strings
 * it will use at most n bytes from src
 *
 * @dest: the string input of function
 * @src: the string input of function
 * @n: input of characters num
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
