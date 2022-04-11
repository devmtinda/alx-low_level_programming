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
	int len1, len2;

	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;

	my_dog = malloc(sizeof(char) * (len1 + len2 + 2));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;

	return (my_dog);
}
