#include "main.h"
/**
 * main - entry point
 *
 * Return=0
 */
void print_alphabet(void)
{
	char alpha = 'a' ;
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
