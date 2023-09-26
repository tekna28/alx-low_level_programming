#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 *@head: linked list.
 * Return: The address of the node where the loop starts
 *or NULL if there is no loop (Success)
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *end, *temp;

if (head == NULL)
return (NULL);

for (end = head->next; end != NULL; end = end->next)
{
if (end == end->next)
return (end);

for (temp = head; temp != end; temp = temp->next)
{
if (temp == end->next)
return (end->next);
}
}
return (NULL);
}
