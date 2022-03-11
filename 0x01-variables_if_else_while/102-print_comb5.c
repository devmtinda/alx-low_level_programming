#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d = 49;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (; d <= 57; d++)
				{
					if (!(a == c && b == d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a == 57 && b == 56 && c == 57 && d == 57)
						{
							putchar('\n');
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
			d = b + 1;
		}
	}
	/* your code goes there */
	return (0);
}
