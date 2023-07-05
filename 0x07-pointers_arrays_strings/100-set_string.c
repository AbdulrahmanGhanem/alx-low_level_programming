#include "main.h"

/**
 * set_string - a C function that sets the value of a pointer to a char
 *
 * @s: string input pointer
 * @to: char input pointer
*/

void set_string(char **s, char *to)
{
	*s = to;
}
