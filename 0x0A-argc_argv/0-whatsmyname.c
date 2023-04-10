#include <stdio.h>
#include "main.h"
/**
 * main - prints the program name
 * @argc: count of arguements
 * @argv: array of arguements
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
