#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 *
 * @head: pointer to  head list
 *
 * Return: sum 0 if it is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
