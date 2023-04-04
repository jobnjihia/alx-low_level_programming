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

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
