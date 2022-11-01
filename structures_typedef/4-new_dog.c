#include "dog.h"
#include <stdlib.h>
#include "functions.h"
/**
 * *new_dog - function to create new dog struct
 * @name: store dog name
 * @age: age
 * @owner: store owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int name_size = sizeof(char) * (_strlen(name) + 1);
	unsigned int owner_size = sizeof(char) * (_strlen(owner) + 1);

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	{
		return (NULL);
	}

	if (name == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(name_size);
	if (dog->name == NULL)
	{
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->age = age;

	if (owner == NULL)
	{
		return (NULL);
	}
	dog->owner = malloc(owner_size);
	if (dog->owner == NULL)
	{
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	return (dog);
}
