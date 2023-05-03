#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: total parameters passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list haha;
	unsigned int m;

	va_start(haha, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(haha, int));
		if (separator && m < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(haha);
}
