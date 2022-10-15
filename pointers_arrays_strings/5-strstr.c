#include "main.h"

/**
 * _strstr - locate substring
 * @haystack: string to search
 * @needle: searched in haystack
 * Return: return 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack = haystack + 1;
			n = n + 1;
		}
		if (!*n)
		{
			return (h);
		}
		haystack = haystack + 1;
	}
	return (0);
}
