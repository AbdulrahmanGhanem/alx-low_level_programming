#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints Alphabets except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			letter++;
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

