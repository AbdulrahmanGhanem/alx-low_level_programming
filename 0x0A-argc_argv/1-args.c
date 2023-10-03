#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: num of commandline arguments
 * @argv: pointer to an array
 *
 * Return: 0 if success, other if fail
 **/

int main(int argc, char *argv[] __attirbute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
