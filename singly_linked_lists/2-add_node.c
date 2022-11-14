#include <string.h>
#include "lists.h"
/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->len = _strlen(str);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

/**
* _strlen - return length of string
* @s: return len of string
* Return: value on strlen
**/
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
