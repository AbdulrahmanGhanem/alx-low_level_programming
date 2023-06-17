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

	for (dgt = 0; dgt <= 9; dgt++)
	{
		putchar('0' + dgt);

		if (dgt != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
