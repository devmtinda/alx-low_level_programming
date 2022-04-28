#include "main.h"
/**
 * get_bit - returns value of a bit
 * @n: number to be converted to binary
 * @index: integer
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, num;

	while (n)
	{
		if (i == index)
		{
			num = n - 2 * (n >> 1);
			break;
		}
		if (n == 1)
		{
			return (-1);
		}
		n = n >> 1;
		i++;
	}

	return (num);
}
