#include "lists.h"

/**
 * add_node - adds node to list beginning
 * @head: pointer to head of list
 * @str: string to add
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *s = strdup(str);
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	if (s == NULL)
		s = "(nil)";

	while (s[i] != '\0')
		i++;

	newNode->str = s;
	newNode->len = i;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
