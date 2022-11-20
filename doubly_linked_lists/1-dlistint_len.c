#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 *
 * @h: pointer to head
 *
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
