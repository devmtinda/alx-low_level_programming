#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - copies string from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: char pointer
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/**
 * new_dog - creates a new dog
 * @name: First string
 * @age: float
 * @owner: Second string
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int len1, len2;

	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);

	my_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
