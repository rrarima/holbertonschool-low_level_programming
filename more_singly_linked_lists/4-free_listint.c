#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to node
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
