#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: the string input of function
 * @src: the string input of function
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
