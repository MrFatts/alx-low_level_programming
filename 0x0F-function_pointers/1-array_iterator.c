#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function passed as parameter
 * on elements of an array
 * @array: looped array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
