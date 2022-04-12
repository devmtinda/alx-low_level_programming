#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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
	if (d == NULL)
	{
		printf("Ok\n");
		exit(0);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
