#include <stdio.h>

/**
 * main - Prints the size of various compiled types
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
