#include "main.h"
/**
 * string_to_int - converts string to int
 * @str: string
 * Return: int
 */
int string_to_int(char *str)
{
	int i, j, n = 0, len, fact = 1;
	char *num = "0123456789";

	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		j = 0;

		if (str[i] < '0' || str[i] > '9')
		{
			n = -1;
			break;
		}

		while (num[j] != '\0')
		{
			if (str[i] == num[j])
			{
				n = n + (j * fact);
				fact *= 10;
				break;
			}
			j++;
		}
	}
	return (n);
}
/**
 * sum_positive - adds positive integers
 * @p: int array
 * @i: integer
 * Return: int
 */
int sum_positive(int *p, int i)
{
	int k, sum = 0;

	for (k = 0; k < i; k++)
	{
		sum = sum + p[k];
	}
	return (sum);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 1, i = 0, add, div, j;
	int p[100];

	while (count < argc)
	{
		p[i] = string_to_int(argv[count]);

		if (p[i] == -1)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (1);
		}
		count++;
		i++;
	}
	add = sum_positive(p, i);
	j = add;


	for (i = 1; j > 9; i *= 10, j /= 10)
		;

	while (i >= 1)
	{
		div = add / i;
		_putchar(div + '0');
		add %= i;
		i /= 10;
	}
	_putchar('\n');
	return (0);
}
