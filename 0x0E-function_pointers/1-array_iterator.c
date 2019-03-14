#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Function executes function
 *
 * @array: pointer to function
 * @action: Pointer for the function needed
 * @size: size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		(*action)(array[i++]);
	}
}
