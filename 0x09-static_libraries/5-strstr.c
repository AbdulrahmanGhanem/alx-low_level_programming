#include "main.h"

/**
 * *_strstr - a C function that locates a substring
 *
 * @haystack: string input
 * @needle: string input
 *
 * Return: haystack, otherwise NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = 0;
		while (haystack[i + k] == needle[k] && needle[k] != '\0')
		{
			k++;
		}
		if (needle[k] == '\0')
			return (haystack + i);
	}
	return (0);
}
