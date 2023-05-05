#include "main.h"
/**
 * clear_bit - sets value of a bit at an index to 0
 * @n: pointer to unsigned int
 * @index: index where to set value at - starting from 0
 * Return: If error -1 else - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
