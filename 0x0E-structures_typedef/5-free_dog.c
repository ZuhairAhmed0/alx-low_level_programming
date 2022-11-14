#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: the struct dog to be free
 *
 * File: 5-free_dog.c
 * Auth: Zuhair Ahmed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
