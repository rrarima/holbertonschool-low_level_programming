#include "main.h"

/**
 * append_text_to_file - function that appends text to end of a file.
 * @filename: a pointer to to file name.
 * @text_content: text we want to add at the end of file
 * Return: 1 if the file exists or -1 if the file does not
 * exist or we have the wrong permissions to write to file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (i < text_content[i])
		{
			i = i + 1;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
