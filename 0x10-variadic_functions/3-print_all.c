#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: constant pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j, integ;
	va_list ap;
	char *p, *ref = "cifs";
	char charc;
	float f;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (ref[j] != '\0')
		{
			if (format[i] == ref[j])
			{
				switch (ref[j])
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
							exit(0);
						else
							printf("%s", p);
						break;
					default:
						break;
				}
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
