#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: character checked
 * Return: Always 0 if c is lowercase
 */
int _islower(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
