#include "main.h"

/**
* *leet - a C function that encodes a string into 1337
*
* @s: string input
*
* Return: s
*/

char *leet(char *s)
{
	int i, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[i] == s1[i])
				s[i] = s2[i];
		}
	}
	return (s);
}
