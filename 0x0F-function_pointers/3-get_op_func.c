#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - selects function for operation
 * @s: operator
 * Return: a pointer to function to b
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (*s == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);

}
