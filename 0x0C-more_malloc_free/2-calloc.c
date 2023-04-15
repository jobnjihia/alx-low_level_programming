#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memoty for elements of array @nmemb
 * @nmemb: - allocate memory for array elements
 * @size: size of array in bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);	
	if (d == NULL)
			return (NULL);
		for (b = 0; b < (nmemb * size); b++)
			d[b] = 0;
		return (d);
}
