#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: return poiter string here
 *@src: src does not need null-termination
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	/*increment i if dest string is not complete*/
	while (dest[i] != '\0')
	{
		i = i + 1;
	}

	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x]; /*move string pointer to dest*/
		i = i + 1;
		x = x + 1;
	}

	dest[i] = '\0';

	return (dest);/*return string pointer her*/
}
