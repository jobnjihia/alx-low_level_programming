#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: - destination of copied memory
 * @src: - source of copied memory
 * @n: - n is number of memory bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
