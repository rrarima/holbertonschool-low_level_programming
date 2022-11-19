#include "lists.h"
/**
  * add_nodeint_end - add node to end of link list
  * @head: A linked list
  * @n: int
  * Return: new_node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *last_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head != NULL)
		{
			last_node = *head;
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = new_node;
		}
		else
		{
			*head = new_node;
		}
	}
	return (new_node);
}
