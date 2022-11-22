#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: text to write to file
 * Return:
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
/**
* _strlen - return length of string
* @s: return len of string
* Return: value on strlen
**/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
