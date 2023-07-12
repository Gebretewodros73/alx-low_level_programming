#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 *		integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *         or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = step;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	while (prev <= curr && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
