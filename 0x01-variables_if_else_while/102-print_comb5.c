#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all combinations of two two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dgt1, dgt2;

	for (dgt1 = 0; dgt1 <= 99; dgt1++)
	{
		for (dgt2 = dgt1; dgt2 <= 99; dgt2++)
		{
			if (dgt1 != dgt2)
			{
				putchar('0' + dgt1 / 10);
				putchar('0' + dgt1 % 10);
				putchar(' ');
				putchar('0' + dgt2 / 10);
				putchar('0' + dgt2 % 10);
				if (dgt1 != 98 || dgt2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

