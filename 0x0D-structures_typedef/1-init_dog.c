#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - mentioning descriptions
 *
 * @d: Char type
 * @name: Character type
 * @age: float type
 * @owner: Char type
 *
 * Description: longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
