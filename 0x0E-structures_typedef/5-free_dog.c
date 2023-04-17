#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freeing the pups
 * @d: dog...
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
