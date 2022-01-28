#include <stdlib.h>
#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table.
  * @ht: The hash table 2 prints.
  * Return: Nothing.
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	int elem = 1;

	if (ht == NULL)
		return;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		for (node = ht->array[index]; node != NULL; node = node->next)
		{
			if (elem)
			{
				printf("'%s': '%s'", node->key, node->value);
				elem = 0;
			}

			else
				printf(", '%s': '%s'", node->key, node ->value);
		}

	}
	printf("}\n");
}
