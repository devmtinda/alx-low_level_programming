#include "main.h"
/**
 * puts2 - entry point
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
