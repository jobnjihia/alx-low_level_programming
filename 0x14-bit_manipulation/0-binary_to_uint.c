#include "main.h"
/**
 * binary_to_uint - changes binary number to an unsigned integer
 * @b: input string cointaining binary
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int n = 0;

	if (!b)
		return (0);
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		m <<= 1;
		if (b[m] == '1')
			n += 1;
	}
	return (n);
}
