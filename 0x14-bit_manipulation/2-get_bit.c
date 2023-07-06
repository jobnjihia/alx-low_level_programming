#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit passed to arguement
 * @index: where to get the value starting from 0
 * Return: if error -1 else bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	if (n == 0 && index < 64)
		return (0);
	for (p = 0; p <= 63; n >>= 1, p++)
	{
		if (index == p)
		{
			return  (n & 1);
		}
	}
	return (-1);
}
