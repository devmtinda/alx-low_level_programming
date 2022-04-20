#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_comma - prints comma
 * @format: string
 * @i: integer
 * Return: void
 */
void print_comma(const char * const format, int i)
{
	switch (format[i + 1])
	{
		case '\0':
			break;
		default:
			printf(", ");
			break;
	}
}
/**
 * switch_statement - entry point
 * @i: integer
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
			print_comma(format, i);
			break;
		case 'i':
			integ = va_arg(ap, int);
			printf("%d", integ);
			print_comma(format, i);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			print_comma(format, i);
			break;
		case 's':
			p = va_arg(ap, char*);
			if (p == NULL)
				p = "(nil)";
			printf("%s", p);
			print_comma(format, i);
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
		i++;
	}
	printf("\n");
	va_end(ap);
}
