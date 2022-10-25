#include "lists.h"

/**
 * listint_len - Function that return the number of elements in a
 * linked listint_t list.
 * @h: linked list
 * Return: Number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
