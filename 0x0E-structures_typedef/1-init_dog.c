#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: intance of dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
