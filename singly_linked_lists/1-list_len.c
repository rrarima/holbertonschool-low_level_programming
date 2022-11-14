#include "lists.h"
/**
  * list_len - Show the number of elements of a list
  * @h: linked list
  *
  * Return: count
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
