#include "main.h"
/**
 * get_endianness - returns the value of a bit at an index
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int l;
	char *m;

	l = 1;
	m = (char *)&l;

	return (*m);
}
