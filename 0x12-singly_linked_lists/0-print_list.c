#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 *@h: linked list
 * Return: the number of nodes (Success)
 */
size_t print_list(const list_t *h)
{
size_t i;
const list_t *temp = h;

for (i = 0; temp != NULL; temp = temp->next, i++)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", temp->len, temp->str);
}
}
return (i);
}
