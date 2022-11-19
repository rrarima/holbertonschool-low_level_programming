#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: pointer to pointer to head of the listint_t list
 * Return: the head node’s data or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int head_node_data = 0;

	if (*head == NULL)
	{
		return (head_node_data);
	}
	else
	{
		tmp = *head;
		head_node_data = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (head_node_data);
	}
}
