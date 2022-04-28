#include "main.h"
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
 * binary_to_uint - converts binary number to an unsigned int
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
		{
			sum = sum + power(i);
		}
		i++;
		len--;
	}
	return (sum);

}
