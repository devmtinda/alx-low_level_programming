#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: numbers of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	if (separator == NULL)
		exit(0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char*));

		if (i == n - 1)
		{
			printf("\n");
			exit(0);
		}
		j = 0;

		while (separator[j] != '\0')
		{
			printf("%c", separator[j]);
			j++;
		}
	}
	va_end(ap);
}
