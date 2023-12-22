#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table to be printed.
 * Return: no return.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int size;
unsigned long int index = 0;
unsigned long int flag = 0;
hash_node_t *current;

if (ht == NULL)
return;
size = ht->size;

printf("{");
while (index < size)
{
current = ht->array[index];
while (current != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
flag = 1;
current = current->next;
}
index++;
}
printf("}\n");
}
