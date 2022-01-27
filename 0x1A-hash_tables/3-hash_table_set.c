#include <stdlib.h>
#include "hash_tables.h"

/**
  * hash_table_set - Adds an element 2 the hash table.
  * @ht: The hash table 2 add or update the key/value to.
  * @key: The key of a value.
  * @value: The value associated with the key.
  * Return: 1 in succees otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long index;
	hash_node_t *new_node, *elem;
	char new_value;

	if (ht == NULL || key == NULL || *key == 0 || value == NULL)
		return (0);
	/* Gives you the index of a key*/
	index = key_index((unsigned char *) key, ht->size);
	elem = ht->array[index];
	
	if (elem && strcmp(key, elem->key) == 0) /*Compare values*/
	{
		free(elem->value);
		elem->value = stdrup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/*Handle errors*/

	/*Copy key*/

	/*Copy value*/
