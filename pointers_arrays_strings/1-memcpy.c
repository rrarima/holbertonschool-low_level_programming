#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: source
 * @n: n bytes of src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*iterate through bytes stored in buffer*/
	for (i = 0; i < n; i = i + 1)
	{
		dest[i] = src[i]; /*move bytes from src to dest*/
	}
	return (dest);
}
