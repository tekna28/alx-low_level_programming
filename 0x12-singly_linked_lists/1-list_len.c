#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list.
 *
 *@h: linked list
 * Return: the number of elements of linked list(Success)
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
