#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
