#include <stdio.h>
/**
 * main -entry point
 * Return:0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (!(i % 3) && !(i % 5))
		{
			printf("FizzBuzz");
		}
		else if (!(i % 3))
		{
			printf("Fizz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
			printf(" ");

		i++;
	}
	printf("\n");
	return (0);
}

