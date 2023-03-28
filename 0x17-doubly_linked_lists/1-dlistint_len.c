#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
