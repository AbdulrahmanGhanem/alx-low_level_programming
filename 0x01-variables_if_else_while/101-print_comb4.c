#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all combinations of 3 digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dgt1, dgt2, dgt3;

	for (dgt1 = 0; dgt1 <= 9; dgt1++)
	{
		for (dgt2 = 0; dgt2 <= 9; dgt2++)
		{
			for (dgt3 = 0; dgt3 <= 9; dgt3++)
			{
				if (dgt1 != dgt2 &&
					dgt1 < dgt2 &&
					dgt2 != dgt3 &&
					dgt2 < dgt3)
				{
					putchar('0' + dgt1);
					putchar('0' + dgt2);
					putchar('0' + dgt3);
					if (dgt1 + dgt2 + dgt3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

