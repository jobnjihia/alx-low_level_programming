#include "main.h"
#include <stddef.h>
/**
 * *_strstr - finds the first occurrence of the substring needle
 * @haystack: string where search is conducted
 * @needle: substring searched for
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	break;
	}
	if (!needle[j])
		return (&haystack[i]);
	}
	return (NULL);
}
