#include <stdlib.h>
/**
 * print_name - prints name
 * @name: string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(0);
	if (f == NULL)
		exit(0);
	f(name);
}
