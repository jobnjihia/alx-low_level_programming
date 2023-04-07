#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: An empty string is a palindrome
 * Return: 1 if it is and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlrn_recursion(s)));
}
/**
 * _strlen_recursion - returns string length
 * @s: the string
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks if str is a palindrome
 * @i: iterator
 * @s: string
 * @len: strlen
 * Return: 1 is str is palindrome
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) !+ *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
