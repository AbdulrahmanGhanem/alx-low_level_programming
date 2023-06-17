#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints Alphabets lower & upper case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter, LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(letter);

	putchar('\n');

	return (0);
}
