#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *express;

	if (list == NULL)
		return (NULL);

	express = list->express;
	while (express && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		current = express;
		express = express->express;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, express->index);
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
