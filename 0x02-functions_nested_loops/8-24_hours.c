#include "main.h"

/**
 *jack_bauer - entry point
 * @n : number to check
 * Return:0 or 1 or -1
 *
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < 3)
	{
		_putchar(a + '0');

		while (b < 4)
		{
			_putchar(b + '0');
			_putchar(':');

			while (c < 6)
			{
				_putchar(c + '0');

				while (d < 10)
				{
					_putchar(d + '0');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

}
