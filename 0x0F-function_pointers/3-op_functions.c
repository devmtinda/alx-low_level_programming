#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns sum
 * @a: First integer
 * @b: Second integer
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference
 * @a: First number
 * @b: Second number
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product
 * @a: First number
 * @b: Second number
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns result of division
 * @a: First number
 * @b: Second number
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns remainder of division
 * @a: First number
 * @b: Second number
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
