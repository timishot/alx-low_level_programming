#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a
 * listint_t list.
 * @h: linked list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
