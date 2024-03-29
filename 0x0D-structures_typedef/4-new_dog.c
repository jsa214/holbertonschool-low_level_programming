#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function creates dog
 *
 * @name: Character type
 * @age: float type
 * @owner: Char type
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
