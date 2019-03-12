#ifndef STRUCT
#define STRUCT DOG
#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - mentioning descriptions
 *
 * @name: Char type
 * @owner: Character type
 * @age: float type
 *
 * Description: longer description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif /*DOG_H*/
