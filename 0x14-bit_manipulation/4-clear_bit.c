#include "main.h"
/**
 * power - returns power
 * @i: integer
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
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: integer
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sum = 0, i = 0, num;

	if (index >= 31)
		return (-1);
	while (1)
	{
		if (index == i)
			num = 0;

		else
			num = *n - 2 * (*n >> 1);

		sum = sum + (num * power(i));
		*n = *n >> 1;
		i++;
		if (*n == 0 && i > index)
		{
			*n = sum;
			break;
		}
	}
	return (1);
}
