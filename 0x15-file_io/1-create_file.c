#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string written into file
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int o_p, wr_f, b = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (b = 0; text_content[b];)
			b++;
	}

	o_p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr_f = write(o_p, text_content, b);
	if (o_p == -1 || wr_f == -1)
	return (-1);

	close(o_p);
	return (1);
}
