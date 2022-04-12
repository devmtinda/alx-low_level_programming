#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints struct dog
 * @d: structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nname, *oowner;
	float aage;

	if (d == NULL)
		;
	else
	{
		nname = d->name;
		aage = d->age;
		oowner = d->owner;

		if (nname == NULL)
			nname = "(nil)";
		if (oowner == NULL)
			oowner = "(nil)";
		printf("Name: %s\n", nname);
		printf("Age: %f\n", aage);
		printf("Owner: %s\n", oowner);
	}
}
