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

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
