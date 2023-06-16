#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints using write function.
 *
 * Return: 1 (Fail)
*/

int main(void)
{
	char sent[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sent, 59);
	return (1);
}
