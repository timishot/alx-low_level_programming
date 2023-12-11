#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 *  array of integers using the Interpolation search algorithm
 *  @array: array is a pointer to the first element of the array
 *   to search in
 *  @size: the number of elements in array
 *  @value: the value to search for
 *  Return: array[index] else -1
 */

int interpolation_search(int *array, size_t size, int value){
	size_t low = 0;
	size_t high = size - 1;

	while(low <= high && value >= array[low] && value <= array[high]){
		size_t pos = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
		if (array[pos] == value){
			return pos;
		}

		if (array[pos] < value){
			low = pos + 1;
		} else{
			high = pos - 1;
		}
	}

	return -1;
}
