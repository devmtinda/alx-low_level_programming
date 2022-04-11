#include "dog.h"
/**
 * init_dog - initializes variable
 * @d: structure
 * @name: First string
 * @age: float
 * @owner: Second owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
