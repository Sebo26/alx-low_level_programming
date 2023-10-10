#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - The function initialize a variable of type struct dog.
 * @d: The dog pointed to.
 * @name: The name of the dog.
 * @age: How old the dog is.
 * @owner: The person that owns the dog.
 * Return: 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
