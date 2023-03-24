#include "main.h"
/**
 * print_square - prints a size square
 * @size: square size
 * Return: int size
 */
void print_square(int size)
{
	int k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
