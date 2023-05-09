#include "main.h"
#include <stdio.h>
/**
 * error_file - andle errors that may occur during file operations
 * @file_from: source location of file
 * @file_to: destination of the file
 * @argv: arguements in command line
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - main entry
 * @argc: arguements passed
 * @argv: number of command line arguements
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int error_close, file_from, file_to;
	ssize_t num_char, f_r;
	char bff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(file_from, bff, 1024);
		if (num_char == -1)
			error_file(-1, 0, argv);
		f_r = write(file_to, bff, num_char);
		if (f_r == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
