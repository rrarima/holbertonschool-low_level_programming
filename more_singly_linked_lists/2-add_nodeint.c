#include "lists.h"
/**
  * add_nodeint - add node to link list
  * @h: A linked list
  *
  * Return: temp
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));

	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
