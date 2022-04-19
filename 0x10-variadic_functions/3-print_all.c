#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
/**
 * print_string - prints string
 * @p: string
 */
void print_string(char *p)
{
	printf("%s, ", p);
}
/**
 * print_all - prints anything
 * @format: constant pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	unsigned int count;
	va_list ap;
	char *p;
	form new[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	count = strlen(format);
	va_start(ap, format);

	i = 0;
	while (i < count - 1)
	{
		p = va_arg(ap, char*);
		j = 0;
		while (format[i] != '\0')
		{
			if (format[i] == new[j].operate[0])
			{
				new[i].f(p);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);

}
