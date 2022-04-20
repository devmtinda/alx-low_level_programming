#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * switch_statement - entry point
 * @j: integer
 * @format: reference string
 * @ap: argument pointer
 * Return: void
 */
void switch_statement(int i, const char * const format, va_list ap)
{
	char charc;
	int integ;
	float f;
	char *p;

	switch (format[i])
	{
		case 'c':
			charc = va_arg(ap, int);
			printf("%c", charc);
			break;
		case 'i':
			integ = va_arg(ap, int);
			printf("%d", integ);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			p = va_arg(ap, char*);
			if (p == NULL)
				p = "(nil)";
			printf("%s", p);
			break;
		default:
			break;
	}
}
/**
 * print_all - prints anything
 * @format: constant pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list ap;

	i = 0;
	if (format == NULL)
	{
		printf("\n");
		exit(0);
	}
	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch_statement(i, format, ap);
		switch (format[i + 1])
		{
			case '\0':
				break;
			default:
				printf(", ");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
