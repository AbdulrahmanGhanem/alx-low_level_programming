#include "main.h"

/**
 * reverse_array - a C function that reverses
 * the content of an array of integers
 *
 * @a: array input nums
 * @n: nums input to reverse
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
