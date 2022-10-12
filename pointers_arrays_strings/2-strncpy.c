#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: - destination string
 * @src: - source string to copy from
 * @n: - number of characters to copy from source string
 * Return: address to first string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/**
	 * iterate src array. If there's no
	 * null byte among the first n bytes of src
	 * the string in dest will not be null-terminated
	 */
	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}

	/**
	 * if len of src < n, write nulllbytes
	 * to dest to ensure total of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
