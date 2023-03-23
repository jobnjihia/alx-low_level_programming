#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: checked character
 * Return: 1 otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
