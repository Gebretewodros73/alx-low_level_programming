#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: The index where the value is found, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform linear search */
	for (i = 0; i < (int)size; i++)
	{
		/* Print the value being check */
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		/* If the value is found, return the index */
		if (value == array[i])
			return (i);
	}
	/* If the value is not found, return -1 */
	return (-1);
}
