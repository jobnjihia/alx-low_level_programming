#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change, new;
	unsigned int k, l;

	k = 0;
	new = 1;
	change = n ^ m;
	for (l = 0; l < (sizeof(unsigned long int) * 8); l++)
	{
		if (new == (change & new))
			k++;
		new <<= 1;
	}
	return (k);
}
