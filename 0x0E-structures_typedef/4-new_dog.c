#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the string representing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the string representing the owner of the dog
 *
 * Return: Pointer to the newly created dog (dog_t)
 *         NULL if memory allocation fails or if name or owner is NULL
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	size_t nameLen, ownerLen;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameLen = strlen(name);
	ownerLen = strlen(owner);

	newDog->name = malloc((nameLen + 1) * sizeof(char));
	newDog->owner = malloc((ownerLen + 1) * sizeof(char));

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strncpy(newDog->name, name, nameLen + 1);
	strncpy(newDog->owner, owner, ownerLen + 1);
	newDog->age = age;

	return (newDog);
}

