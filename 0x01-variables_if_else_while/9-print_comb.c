#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints digit numbers using putchar()
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dgt;

	for (dgt = 48; dgt <= 57; dgt++)
		putchat(dgt);
		putchar(',');
		putchar(' ');

	putchar('\n');

	return (0);
}
