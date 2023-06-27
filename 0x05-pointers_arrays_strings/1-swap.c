#include "main.h"

/**
 * swap_int - A C function that swaps the values of two integers.
 *
 * @a: 1st input
 * @b: 2nd input
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
