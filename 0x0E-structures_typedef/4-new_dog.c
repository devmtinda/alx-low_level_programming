#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: First string
 * @age: float
 * @owner: Second string
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogs;
	dog_t *my_dog = &dogs;
	char *p1, *p2;
	int len1, len2, i;

	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;

	p1 = malloc(sizeof(char) * (len1 + 1));
	if (p1 == NULL)
		return (NULL);

	p2 = malloc(sizeof(char) * (len2 + 1));
	if (p2 == NULL)
		return (NULL);

	i = 0;
	while (i <= len1)
	{
		p1[i] = name[i];
		i++;
	}
	i = 0;
	while (i <= len2)
	{
		p2[i] = owner[i];
		i++;
	}

	my_dog->name = p1;
	my_dog->age = age;
	my_dog->owner = p2;

	return (my_dog);
}
