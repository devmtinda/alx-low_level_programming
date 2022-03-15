#include "main.h"

/**
 * jack_bauer- entry point
 * Return:0 or 1 or -1
 *
 */
void jack_bauer(void)
{
	int a = 0;
	int b;
	int c;
	int d;
	int e = 10;

	while (a < 3)
	{
		b = 0;
		if (a == 2)
		{
			e = 4;
		}

		while (b < e)
		{
			c = 0;

			while (c < 6)
			{
				d = 0;

				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

}
