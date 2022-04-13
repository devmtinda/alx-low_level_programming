#include <stddef.h>
/**
 * int_index - searches for integer
 * @array: integer array
 * @size: array length
 * @cmp: pointer function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		res = (*cmp)(array[i]);
		if (res != 0)
			return (i);
		i++;
	}

	return (-1);
}
