#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character _ should be printed
 * Return: int n
 */
void print_diagonal(int n)
{
	int k = 0;

	if (k > 0)
	{
		for (k = 0; k < n; k++)
			_putchar('_');
	}
	_putchar('\n');
}
