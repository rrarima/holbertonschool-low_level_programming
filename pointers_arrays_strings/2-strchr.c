#include "main.h"

/**
* _strchr - locate character in string
* @s: pointer to our string array input
* @c: character to locate from input array
* Return: 0
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s = s + 1;
		}
		s = s + 1;
	}

	/*if c is '\0', return pointer to s strings '\0'*/
	if (*s == c)
	{
		return (s);
	}
	/*return null if not found*/
	return ('\0');
}
