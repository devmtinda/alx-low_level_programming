#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return:0
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
			i++;
		}
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
