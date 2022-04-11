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

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	

	return (my_dog);
}
