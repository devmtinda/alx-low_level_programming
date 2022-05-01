#include "main.h"
/**
 * power - returns power
 * @i: integer
 * Return: int
 */
int power(int i)
{
	int p = 1;

	while (i > 0)
	{
		p = p * 2;
		i--;
	}
	return (p);
}
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to the value
 * @index: integer
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, sum = 0, num;

	if (index >= 31)
		return (-1);
	while (1)
	{
		if (index == i)
			num = 1;

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
