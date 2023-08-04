i#include "main.h"
/**
 * binary_to_uint - changes binary number to an unsigned integer
 * @b: input string cointaining binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int n = 0;

	if (!b)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		n = 2 * n + (b[m] - '0');
	}
	return (n);
}
