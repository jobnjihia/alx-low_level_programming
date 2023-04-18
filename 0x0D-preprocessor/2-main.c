#include <stdio.h>
/**
 * main - prints the name of the file from which it was compiled
 * Return - Always 0
 */
int main(void)
{
	print("%s\n", _FILE_);
	return (0);
}
