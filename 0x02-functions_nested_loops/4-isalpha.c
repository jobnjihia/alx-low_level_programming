#include "main.h"
/**
 * _isalpha - checks if c is a letter, lowercase or uppercase
 * @c: upper or lowercase
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}
