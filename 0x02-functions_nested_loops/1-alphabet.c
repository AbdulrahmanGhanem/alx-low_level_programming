#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet, in lowercase
*/

void main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
