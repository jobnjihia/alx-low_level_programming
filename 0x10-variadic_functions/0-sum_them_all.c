#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters given
 * @n: no of arguments passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list sum_them_all;

	va_start(sum_them_all, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(sum_them_all, int);
	}
	va_end(sum_them_all);

	return (sum);
}
