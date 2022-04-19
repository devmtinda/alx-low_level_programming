#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: argument count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	{
		exit(1);
	}

	else
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i == n - 1)
			{
				printf("\n");
				break;
			}
			if (separator == NULL)
				;
			else
				printf("%s", separator);
		}
		va_end(ap);
	}
}
