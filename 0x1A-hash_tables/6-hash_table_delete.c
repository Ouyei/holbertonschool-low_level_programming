#include <stdlib.h>
#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table.
  * @ht: The hash table to frees.
  * Return: Nothing.
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *elem, *next;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (elem = ht->array[index]; elem != NULL; elem = next)
		{
			next = elem->next;
			free(elem->key);
			free(elem->value);
			free(elem);
		}
	}
	free(ht->array);
	free(ht);
}
