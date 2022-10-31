#include "dog.h"
/**
 *_strcpy - copy the string pointed to by src
 *@dest: dest pointer
 *@src: src pointer
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* iterate string because src is not null*/
	while (src[i] != '\0')
	{
		dest[i] = src[i]; /*move src string to dest*/
		i = i + 1; /*add new string to array*/
	}
	dest[i] = '\0'; /*new cpy of src in dest saved after while loop*/

	return (dest);
}

/**
* _strlen - return length of string
* @s: return len of string
* Return: value on strlen
**/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
