#include "main.h"
/**
 * _print_rev_recursion - prints string followed by new line
 * @s: string printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
