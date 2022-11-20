#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list
 *
 * @head: pointer to head
 * @index: position to look
 *
 * Return: return tmp or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int node_num = 0;

	tmp = head;
	while (tmp != NULL && node_num <= index)
	{
		if (node_num == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		node_num = node_num + 1;
	}
	return (NULL);
}
