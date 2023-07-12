#include "search_algos.h"

int ebinary_search(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *         or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (ebinary_search(array, left, right, value));
}

/**
 * ebinary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the subarray
 * @right: ending index of the subarray
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int ebinary_search(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
