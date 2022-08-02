#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialised a vairable
 * @d: parameter member
 * @name: parameter member
 * @age: parameter member
 * @owner: parameter member
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
