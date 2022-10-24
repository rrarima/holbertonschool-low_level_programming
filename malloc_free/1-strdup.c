#include "main.h"
#include <stdlib.h>


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

/**
 * _strdup - return pointer in new allocated memory,
 * that has a copy of s
 * @str: string to copy
 * Return: copy1
 */
char *_strdup(char *str)
{

	char *copy1, *copy2;

	if (!str)
	{
		return (NULL); /*Returns NULL if str = NULL*/
	}

	copy1 = malloc((_strlen(str) + 1) * sizeof(char));


	if (!copy1)
	{
		return (NULL); /*Return NULL if not enough memory*/
	}

	copy2 = copy1;

	while (*str)
	{
		*copy2 = *str; /*store *str into *copy2*/
		str = str + 1; /*open space for str*/
		copy2 = copy2 + 1; /*increment string of copy2 store in *str*/
	}

	*copy2 = '\0'; /*store a copy*/

	return (copy1);
}
