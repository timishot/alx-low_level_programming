#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 *  of integers using the Binary search algorithm
 *  @array: a pointer to the first element of the array to search
 *  @size: the number of elements in array
 *  @value:  the value to search for
 *  Return: value else -1
 */

int binary_search(int *array, size_t size, int value){
	size_t low = 0;
	size_t high = size -1, mid;

	if (!value)
		return (-1);

	if (array == NULL)
		return (-1);

	while (low <= high){
		printf("Searching in array: ");
        	for (mid = low; mid < high; mid++)
            		printf("%d, ", array[mid]);
        	printf("%d\n", array[mid]);

		mid = low + (high - low) / 2;

		if (array[mid] == value){
			return mid;
		}else if (array[mid] < value){
			low = mid + 1;
		}else {
			high = mid - 1;
		}
	}

	return -1;
}
