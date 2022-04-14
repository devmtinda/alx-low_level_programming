#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: argument count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	if (n == 0)
		exit(0);

	if (separator == NULL)
		exit(0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));


		if (i == n - 1)
		{
			printf("\n");
			break;
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
