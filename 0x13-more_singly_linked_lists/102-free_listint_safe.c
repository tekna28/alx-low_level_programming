#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 *The function sets the head to NULL.
 *
 *@h: linked list.
 * Return: the size of the list that was freed(Success)
 */
size_t free_listint_safe(listint_t **h)
{
size_t i = 0, j;
listint_t *temp, *check, *dup = *h;

while ((*h) != NULL)
{
i++;
temp = *h;
*h = (*h)->next;
free(temp);
check = dup;
j = 0;
while (j < i)
{
if (*h == check)
{
*h = NULL;
return (i);
}
check = check->next;
j++;
}
}
return (i);
}
