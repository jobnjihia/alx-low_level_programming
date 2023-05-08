#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 *
 * @filename: name of file pointed to
 * @letters: total number of letters read and printed
 * Return: number of letters read else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, len_r, len_w;
	char *bff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bff = malloc(sizeof(char) * letters);
	len_r = read(fd, bff, letters);
	len_w = write(STDOUT_FILENO, bff, len_r);

	free(bff);
	close(fd);
	return (len_w);
}
