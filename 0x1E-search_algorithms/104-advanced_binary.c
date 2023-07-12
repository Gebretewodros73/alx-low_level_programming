#include "search_algos.h"

/**
 * print_array - Prints an array in a specified range
 *
 * @array: The array to print
 * @start: The start index of the range
 * @end: The end index of the range
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Recursively searches for a value in a
 *		sorted array of integers using the
 *		Advanced Binary search algorithm
 *
 * @array: The sorted array to search in
 * @start: The start index of the subarray
 * @end: The end index of the subarray
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
		return (-1);

	print_array(array, start, end);
	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] < value)
			return (mid);
		else
			return (advanced_binary_recursive(array, start, mid, value));
	}
	else if (array[mid] < value)
	{
		return (advanced_binary_recursive(array, mid + 1, end, value));
	}
	else
	{
		return (advanced_binary_recursive(array, start, mid - 1, value));
	}
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the Advanced Binary search algorithm
 *
 * @array: The sorted array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

