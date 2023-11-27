#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the text content to append the file
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k;
	int i;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	k = open(filename, O_WRONLY | O_APPEND);
	i = write(k, text_content, len);

	if (k == -1 || i == -1)
		return (-1);

	close(k);

	return (1);
}

