#include "main.h"
/**
 * square - entry point
 * @n: integer
 * @val: integer
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion -entry point
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 0));
}
