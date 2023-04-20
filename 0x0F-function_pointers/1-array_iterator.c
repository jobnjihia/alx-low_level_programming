#include "functions_pointers.h"
/* array_iterator - iterates function parameters 
 * on each array elemt
 * @array: array to execute func on
 * @size: is the size of the array
 * @action:  is a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		j = 0;
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
