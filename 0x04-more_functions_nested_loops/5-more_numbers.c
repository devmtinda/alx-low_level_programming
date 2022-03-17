#include "main.h"
/**
 * more_numbers - entry point
 * Return:0
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	int rem;

	while (i < 10)
	{
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
		_putchat('\n');
		j++;
	}
}
