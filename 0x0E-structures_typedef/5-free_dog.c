#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: d structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
