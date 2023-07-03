#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees the memory allocated for the name and owner
 *              strings of a dog, and then
 *              frees the memory allocated for the dog itself.
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

