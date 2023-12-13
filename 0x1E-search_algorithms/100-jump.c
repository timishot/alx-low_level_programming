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

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t step = (size_t) sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);


	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev += step;
		if (prev >= size)
		{
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%ld] =  [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}


