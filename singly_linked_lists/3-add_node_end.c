#include <string.h>
#include "lists.h"
/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: new_node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
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
