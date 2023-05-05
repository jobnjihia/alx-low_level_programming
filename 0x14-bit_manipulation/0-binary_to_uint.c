#include "main.h"
/**
 * binary_to_uint - changes binary number to an unsigned integer
 * @b: input string cointaining binary
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int n = 0, l = 1;

	if (!b)
		return (0);
	for (m = 0; b[m] != '\0';)
		m++;
	for (m -= 1; m >= 0; m--)
		{
			if (b[m] != '0' && b[m] != '1')
				return (0);
			if (b[m] != '0' && b[m] != '1')
				return (0);
			n += (b[m] - '0') * l;
			l *= 2;
		}
	return (n);
}
