#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name printed
 * @f: pointer to the print function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
