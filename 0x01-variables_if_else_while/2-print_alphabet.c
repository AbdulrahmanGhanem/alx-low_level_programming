#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints Alphabets
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
