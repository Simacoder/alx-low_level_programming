#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that fre dog
 * @d: parameter member
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
