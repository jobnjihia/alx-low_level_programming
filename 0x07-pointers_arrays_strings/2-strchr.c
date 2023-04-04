#include "main.h"
#include <stdio.h>
/**
 * *_strchr - pointer to the first occurrence of the character c in the string s
 * @s: string for the search
 * @c: char being searched
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
