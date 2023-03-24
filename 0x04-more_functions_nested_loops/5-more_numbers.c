#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Returns: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		if (j >= 10 && j <= 14)
		_putchar(j / 10 + '0');
	_putchar(j % 10 + '0');
	}
	_putchar('\n');
}
