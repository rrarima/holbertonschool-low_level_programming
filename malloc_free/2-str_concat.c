#include <stdlib.h>
#include <string.h>
#include "main.h"

int _strlen(char *s);
char *_strcat(char *dest, char *src);

/**
* _strlen - return length of string
* @s: return len of string
* Return: value on strlen
**/
int _strlen(char *s)
{
	/**
	 * strlen used to find out how much space
	 * we need to get to store
	 * new string from s1 and s2
	 **/
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *str1, *str2;

	if (s1 == NULL) /*if NULL is passed, treat it as an empty string*/
	{
		s1 = "";
	}
	if (s2 == NULL) /*if NULL is passed, treat it as an empty string*/
	{
		s2 = "";
	}

	/*Assign _strlen s1 + s2 to str1 + 1 for '\0'*/
	str1 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);

	if (!str1)
	{
		/*The function should return NULL on failure*/
		return (NULL);
	}

	str2 = str1;

	/*"Best " Loop*/
	while (*s1)
	{
		*str2 = *s1; /*store s1 into str2*/
		str2 = str2 + 1; /*open space for str2*/
		s1 = s1 + 1; /*increment string of s1 store store in str2*/
	}

	/*"School" Loop*/
	while (*s2)
	{
		*str2 = *s2; /*store s2 into str2*/
		str2 = str2 + 1; /*open space for str2*/
		s2 = s2 + 1; /*increment string of s2 store store in str2*/
	}

	*str2 = '\0';

	return (str1);
}
