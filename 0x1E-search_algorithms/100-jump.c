#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, n, i, step;

	if (!array)
		return (-1);

	step = sqrt(size);

	for (i = 0; ; i++)
	{
		m = step * i;
		if (array[m] >= value || m > size)
		{
			n = step * (i - 1);
			printf("Value found between indexes [%ld] and [%ld]\n", n, m);
			while (n < size)
			{
				printf("Value checked array[%ld] = [%d]\n", n, array[n]);
				if (array[n] == value)
					return (n);
				n++;
			}
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	}

	return (-1);
}
