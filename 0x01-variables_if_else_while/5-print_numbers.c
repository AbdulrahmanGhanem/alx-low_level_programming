#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints digits of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dgt;

	for (dgt = 0; dgt <= 9; dgt++)
		printf("%d", dgt);

	printf("\n");

	return (0);
}
