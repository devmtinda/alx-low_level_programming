#include "main.h"
/**
 * reverse_array - entry point
 * @a: first integer
 * @n: second integer
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i, half, j, new;

	if (n % 2)
		half = (n - 1) / 2;

	else
		half = n / 2;

	j = 0;

	for (i = n - 1; i >= half; i--)
	{
		new = a[i];
		a[i] = a[j];
		a[j] = new;
		j++;
	}
}
