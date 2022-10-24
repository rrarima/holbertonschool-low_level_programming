#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _strlen(char *s);

/**
 * str_concat - a function that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int str1 = 0, str2 = 0;
	char *output;

	if (s1 == NULL) /*check if s1 == NULL return failed if true*/
	{
		s1 = "\0";
	}
	if (s2 == NULL) /*check if s2 == NULL return failed if true*/
	{
		s2 = "\0";
	}

	str1 = _strlen(s1); /*stores s1 from _strlen itteration*/
	str2 = _strlen(s2); /*stores s2 from _strlen itteration*/

	output = malloc((str1 + str2) * sizeof(*s1) + sizeof(*s2));

	if (output == 0)
	{
		return (NULL);
	}

	strcat(output, s1);
	strcat(output, s2);

	return (output);

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
