#include "lists.h"
/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: Pointer to head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			sum = sum + tmp->n;
			tmp = tmp->next;
		}
		return (sum);
	}
	return (0);
}
