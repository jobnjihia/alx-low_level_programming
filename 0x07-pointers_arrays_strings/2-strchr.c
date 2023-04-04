#include "main.h"
#include <stdio.h>
/**
 * *_strchr - returns pointer of first occurence of c
 * @c: char being searched
 * @s: pointer returned
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
