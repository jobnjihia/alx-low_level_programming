#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguements passed to it
 * @argc: count of arguements
 * @argv: the arguements
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n",  argv[i]);
	return (0);
}
