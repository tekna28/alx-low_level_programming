#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hashtable.
 *
 * @size: the size of the hash table.
 * Return: hashtable will be created
 *         or NULL if something goes wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int i;

hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);

hash_table->size = size;
hash_table->array = malloc(sizeof(hash_node_t *) * size);

if (hash_table->array == NULL)
{
free(hash_table->array);
return (NULL);
}

for (i = 0; i < size; i++)
hash_table->array[i] = NULL;

return (hash_table);
}
