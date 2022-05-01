#include "main.h"
#include <limits.h>
/**
 * power - returns the value of 2 power the argument
 * @i: unsigned integer
 * Return: unsigned int
 */
unsigned int power(unsigned int i)
{
	unsigned int p = 1;

	while (i > 0)
	{
		p = p * 2;
		i--;
	}
	return (p);
}
/**
 * get_bit - returns value of a bit
 * @n: number to be converted to binary
 * @index: integer
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, num;

	if (power(index) > INT_MAX)
		return (-1);
	while (n)
	{
		if (i == index)
		{
			num = n - 2 * (n >> 1);
			return (num);
		}
		n = n >> 1;
		i++;
	}


	return (0);
}
