#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: filename
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails -1, else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(o, text_content, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
