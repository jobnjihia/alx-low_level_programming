#include "main.h"
/**
 * print_numbers - prints the numbers 0 to 9
 * _putchar: prints integers
 * @c: integer
 * Return: void
 */
int _putchar(int c);
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
