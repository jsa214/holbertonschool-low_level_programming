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
/**
 * dog - Typedef for dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
