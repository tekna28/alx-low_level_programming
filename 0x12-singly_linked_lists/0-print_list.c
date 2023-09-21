#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 *@h: linked list
 * Return: the number of nodes (Success)
 */
size_t print_list(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}
