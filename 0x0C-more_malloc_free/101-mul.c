#include <stdio.h>
#include<stdlib.h>
/**
 * stringtoint - converts string to int
 * @argv: argument vector
 * @q: int
 * Return: int
 */
int stringtoint(char *argv[], int q)
{
	char *str = argv[q];
	int i, j, n = 0, len, fact = 1;
	char *num = "0123456789";

	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		j = 0;

		if (str[i] < '0' || str[i] > '9')
		{
			n = -1;
			break;
		}

		while (num[j] != '\0')
		{
			if (str[i] == num[j])
			{
				n = n + (j * fact);
				fact *= 10;
				break;
			}
			j++;
		}
	}
	return (n);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	i = 1;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
		i++;
	}
	num1 = stringtoint(argv, 1);
	num2 = stringtoint(argv, 2);

	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
