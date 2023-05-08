#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file where text is appended
 * @text_content: NULL terminated text appended
 * Return: 1 else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_p, w_f, j;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	o_p = open(filename, O_WRONLY | O_APPEND);
	w_f = write(o_p, text_content, j);

	if (o_p == -1 || w_f == -1)
		return (-1);

	close(o_p);

	return (1);
}
