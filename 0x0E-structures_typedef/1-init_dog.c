#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Pointer to the string representing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the string representing the owner of the dog
 *
 * Description: This function initializes the elements of a struct dog
 *              with the provided values for name, age, and owner.
 **/
void init_dog(Dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

