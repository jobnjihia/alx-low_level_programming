#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @s: starting address
 * @b: desired value
 * @n: number of bytes changed
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
