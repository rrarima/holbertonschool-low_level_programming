#include <stdio.h>
#include "lists.h"
/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: count
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
