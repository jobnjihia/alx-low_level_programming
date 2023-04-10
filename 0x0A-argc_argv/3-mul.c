#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - mutpilies two numbers
 * @argc: arguement count
 * @argv: the arguements
 * Return: Always (0) success and (1) error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
