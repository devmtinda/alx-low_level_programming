#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument point
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, len, res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	len = strlen(op);
	if (len != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	res = (get_op_func(op))(num1, num2);
	printf("%d\n", res);
	return (0);
}
