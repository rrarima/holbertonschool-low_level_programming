#include <stdio.h>
#include "lists.h"
/**
  * print_listint_len - Prints all elements of a list
  * @h: A linked list
  *
  * Return: count
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
