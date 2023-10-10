#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - The function frees dogs.
 * @d: The dog that was initialized.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);

	if (d == NULL)
	{
		return;
	}
}
