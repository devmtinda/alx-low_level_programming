#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return=0
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		_putchar('\n');
	}
}
