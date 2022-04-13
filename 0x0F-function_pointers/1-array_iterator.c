#include <stddef.h>
/**
 * array_iterator - executes a function
 * @array: int array
 * @size: size of array
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
