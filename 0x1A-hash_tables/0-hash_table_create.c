#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 *
 * Return: pointer when suucces
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hat;

	if (size == 0)
		return (NULL);

	hat = malloc(sizeof(hash_table_t));
	if (hat == NULL)
		return (NULL);

	hat->size = size;
	hat->array = calloc(size, sizeof(hash_node_t *));
	if (hat->array == NULL)
	{
		free(hat);
		return (NULL);
	}

	return (hat);
}
