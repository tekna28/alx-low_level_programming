#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nbr_nodes = 0;

while (h != NULL)
{
nbr_nodes++;
h = h->next;
}

return (nbr_nodes);
}
