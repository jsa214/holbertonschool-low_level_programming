#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - function creates dog
 *
 * @d: parameter pointing to struct dog
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
