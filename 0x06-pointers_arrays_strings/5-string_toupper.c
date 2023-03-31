#include "main.h"
/**
 * string_toupper - changes lower case letters
 * to uppercase letters
 * @s: string changed
 * Return: pointer to changed string
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
