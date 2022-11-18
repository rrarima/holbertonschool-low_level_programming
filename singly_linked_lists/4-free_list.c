#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to node
 * Return: 0
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
