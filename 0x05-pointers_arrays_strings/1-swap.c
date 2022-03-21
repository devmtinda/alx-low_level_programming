#include "main.h"
/**
 * swap_int - entry point
 * @a: pointer a
 * @b: pointer b
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
