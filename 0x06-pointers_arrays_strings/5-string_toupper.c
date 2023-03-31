#include "main.h"
/**
 * string_toupper - changes lower case letters
 * to uppercase letters
 * @str: string changed
 * Return: pointer to changed string
 */
char *string_toupper(char *)
{
	int index = 0
	
	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
