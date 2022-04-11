#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nname = d->name;
	float aage = d->age;
	char *oowner = d->owner;

	if (d == NULL)
		;
	else
	{
		if (nname == NULL)
			nname = "(nil)";
		else if (oowner == NULL)
			oowner = "(nil)";
		printf("Name: %s\n", nname);
		printf("Age: %f\n", aage);
		printf("Owner: %s\n", oowner);
	}
}
