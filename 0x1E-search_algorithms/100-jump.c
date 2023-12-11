#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for
 * a value in a sorted array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: Print value else (-1)
 */

int jump_search(int *array, size_t size, int value){
	size_t i;
	size_t step = (size_t) sqrt(size); /* Determine the block size*/

	/* Find the block where the target might be present*/
	size_t prev = 0;
	while (array[prev] < value){
		prev += step;
		if (prev >= size){
			return -1; /* value not found the array*/
		}
	}

	/* Perform linear search within the identified block*/
	for ( i = prev - step; i <= prev; i++){
		if (array[i] == value){
			return i;
		}
	}

	return (-1);
}
