#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_dog - The function prints a struct dog.
 * @d: The dog that will be initialised.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return(0);
	}

	if (d->name == NULL)
	{
		printf(""
