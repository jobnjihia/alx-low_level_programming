#include "function_pointers.h"
#include <stdlib.h>
/*
 * array_iterator - iterates function parameters
 * @array: array to execute function on
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
