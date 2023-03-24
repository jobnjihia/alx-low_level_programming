#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character _ should be printed
 * Return: int n
 */
void print_diagonal(int n)
{
	int k;

	if (k <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
