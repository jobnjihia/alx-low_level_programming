#include "main.h"
/**
 * print_line - function that draws a line on the terminal
 * @n: number of times the character _ should be printed
 * Return: int n
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
