#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: for the wheresearch is done
 * @size: size of array
 * @cmp: pointer functionto array
 * Return: (-1) index of  first istance of error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j] != 0))
				return (j);

				j++;
			}
		}
	}

	return (-1);
}
