#include "search_algos.h"

listint_t *jump_list(listint_t *list, size_t size, int value){
	listint_t *temp;
	listint_t *forward;
	int count = 0;
	int step = (int) sqrt(size);
	listint_t *low = list;
	listint_t *high =list;

	temp = list;
	forward = list;

	while (forward != NULL){
		while (count < step && temp != NULL){
			if (count == 0)
				low = temp;

			if (count == step-1)
				high = temp->next;
			if (temp->n == value){
				printf("value found between indexes [%ld] and [%ld]\n", low->index, high->index);
				while (low != high){
					printf("value checkes at index [%ld] = [%d]\n", low->index, low->n);
					low = low->next;
				}
				return temp;
			}
			else{
				temp = temp->next;
				count++;
			}
		}
		if (temp != NULL)
			printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		/*if (temp == NULL)
			printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);*/

		count = 0;
		forward = temp;
	}
	return NULL;
}

