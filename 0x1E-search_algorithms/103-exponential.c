#include "search_algos.h"

/**
 * binarySearch - function that searches for a value in a 
 * sorted array of integers using the Binary search algorithm
 * @arr: list
 * @low: first element
 * @high: highest element
 * @target: value
 * Return: indexx else (-1)
 */

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}


/**
 * exponential_search -  a function that searches for a value in
 * a sorted array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: he value to search for
 * Return: index else (-1)
 */

int exponential_search(int *array, size_t size, int value){
	size_t bound;
	size_t low;
	size_t high;


	if (size <= 0){
		return -1;
	}

	bound = 1;

	while (bound < size && array[bound] < value){
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1; 

	return binarySearch(array, low, high, value);
}
