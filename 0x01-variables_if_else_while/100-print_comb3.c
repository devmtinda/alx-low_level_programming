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

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}

	}
	/* your code goes there */
	return (0);
}
