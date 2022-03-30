#include "main.h"
/**
 * is_prime_number - entry point
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
	int num;

	if (n <= 1)
		num = 0;

	else if (n % 2 && n % 3 && n % 5)
		num = 1;

	else
		num = 0;

	return (num);
}
