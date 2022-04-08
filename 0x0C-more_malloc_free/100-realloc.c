#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: int
 * @new_size: int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		;

	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}

	return (ptr);

}
