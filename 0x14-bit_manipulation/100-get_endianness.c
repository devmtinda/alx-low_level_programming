#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: int
 */
int get_endianness(void)
{
	int i = 1, n;

	char *p = (char *)&i;

	if (*p)
		n = 1;
	else
		n = 0;

	return (n);
}
