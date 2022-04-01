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

		while (num[j] != '\0')
		{
			if (str[i] == num[j])
			{
				n = n + (j * fact);
				fact *= 10;

				if (str[i - 1] == '-')
				{
					n *= -1;
				}
				break;
			}
			j++;
		}

	}
	return (n);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mult, i, j, div, c, d;
	char *a = argv[1], *b = argv[2];

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	else
	{
		c = string_to_int(a);
		d = string_to_int(b);
		mult = c * d;

		if (mult < 0)
		{
			mult *= -1;
			_putchar('-');
		}
		j = mult;

		for (i = 1; j > 9; i *= 10, j /= 10)
			;

		while (i >= 1)
		{
			div = mult / i;
			_putchar(div + '0');
			mult %= i;
			i /= 10;
		}
		_putchar('\n');
	}
	return (0);
}
