#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int p = 0, num;

	n = n ^ m;

	while (1)
	{
		num = n - 2 * (n >> 1);

		if (num == 1)
			p++;

		n = n >> 1;

		if (n == 0)
			break;
	}
	return (p);

}
