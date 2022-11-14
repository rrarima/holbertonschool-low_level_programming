#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s \n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count = count + 1;
	}
	return (count);
}
