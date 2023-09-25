#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 *@h: linked list.
 * Return: number of nodes (Success)
 */
size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h != NULL; h = h->next, i++)
{
printf("%d\n", h->n);
}
return (i);
}
