#include "main.h"
/**
 * more_numbers - entry point
 * Return:0
 */
void more_numbers(void)
{
	int i;
	int j = 0;
	int rem;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			rem = i;
			if (i > 9)
			{
				_putchar('1');
				rem = i - 10;
			}
			_putchar(rem + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
