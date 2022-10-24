#include "lists.h"

/**
 * list_len - get length of linked list
 * @h: pointer to start of list
 *
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
