#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints hexa digits  using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char hexaDgt;

	for (hexaDgt = '0'; hexaDgt <= '9'; hexaDgt++)
		putchar(hexaDgt);

	for (hexaDgt = 'a'; hexaDgt <= 'f'; hexaDgt++)
		putchar(hexaDgt);

	putchar('\n');

	return (0);
}

