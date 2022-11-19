#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to node
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	while (head && *head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
