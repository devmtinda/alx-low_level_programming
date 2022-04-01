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
					n = -1;
				break;
			}
			j++;
		}
	}
	return (n);
}
/**
 * print_num - prints number
 * @min: integer
 * Return: void
 */
void print_num(int min)
{
	int j = min, i, div;

	for (i = 1; j > 9; i *= 10, j /= 10)
		;

	while (i >= 1)
	{
		div = min / i;
		_putchar(div + '0');
		min %= i;
		i /= 10;
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num, i = 0, min = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	num = string_to_int(argv[1]);

	if (num == -1)
		_putchar('0');

	else
	{
		while (num)
		{
			if (num / change[i])
			{
				num = num - change[i];
				min++;
			}
			else
				i++;
		}
		print_num(min);
	}

	_putchar('\n');
	return (0);
}
