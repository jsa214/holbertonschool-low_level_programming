#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function creates dog
 *
 * @d: parameter pointing to struct dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
