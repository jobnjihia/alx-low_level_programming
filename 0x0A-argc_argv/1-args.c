#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments parsed
 * @argc: count of arguments
 * @argv: the arguments
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
