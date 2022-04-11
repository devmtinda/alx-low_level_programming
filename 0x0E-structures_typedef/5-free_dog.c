#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: d structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
}
