#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 * at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;

if (temp == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
if (temp->next)
temp->next->prev = NULL;
free(temp);
return (1);
}

while (index > 0 && temp != NULL)
{
temp = temp->next;
index--;
}

if (temp == NULL)
return (-1);

if (temp->prev)
temp->prev->next = temp->next;

if (temp->next)
temp->next->prev = temp->prev;

free(temp);
return (1);
}
