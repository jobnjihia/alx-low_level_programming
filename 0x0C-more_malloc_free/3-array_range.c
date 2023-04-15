#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored including total elements
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, j = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = j++;
			return (arr);
}
