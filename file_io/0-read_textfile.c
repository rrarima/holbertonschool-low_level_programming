#include "main.h"
/**
 *read_textfile - read text file and print to POSIX stdout
 *@filename: name of the file to read
 *@letters: number of letters to be printed
 *Return: numbers of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	//char *buff;
	int fd, rd, wr;

	if (filename == NULL)
	{
		return (0);
	}
	/*buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
	{
		return (0);
		}*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		//free(buff);
		return (0);
	}
	/*rd = read(fd, buff, letters);
	if (rd == -1)
	{
		//free(buff);
		close(fd);
		return (0);
		}*/
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		//free(buff);
		close(fd);
		return (0);
	}
	//free(buff);
	close(fd);
	return (wr);
}
