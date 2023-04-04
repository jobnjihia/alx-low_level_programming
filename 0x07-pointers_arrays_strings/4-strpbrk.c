#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string sort
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (null);
}
