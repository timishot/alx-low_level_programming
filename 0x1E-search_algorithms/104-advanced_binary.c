#include "search_algos.h"
/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @low: Lower index of the current search range
 * @high: Upper index of the current search range
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present
 */


int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);

	if (low == high)
		return (-1);

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	else
		return (advanced_binary_recursive(array, low, mid, value));
}

