#include "hash_tables.h"
#include <stdlib.h>

/**
  * hash_table_print - Prints a hash table.
  * @ht: The hash table 2 prints.
  * Return: Nothing.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *elem;
	int bgnn = 1;

	if (ht == NULL)
		return;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		for (elem = ht->array[index]; elem != NULL; elem = elem->next)
		{
			if (bgnn)
			{
				printf("'%s': '%s'", elem->key, elem->value);
				bgnn = 0;
			}

			else
				printf(", '%s': '%s'", elem->key, elem->value);
		}

	}
	printf("}\n");
}
