#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * index of a listint_t linked list.
 *
 *@head: linked list.
 *@index:  index of the node that should be deleted.
 * Index starts at 0.
 * Return: 1 (Success)
 * -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *temp = *head;
unsigned int i = 0;

if ((temp != NULL) && (index == 0))
{
*head = temp->next;
free(temp);
return (1);
}
while (temp != NULL)
{
if (i + 1 == index)
{
node = temp->next;
if (node != NULL)
{
temp->next = node->next;
free(node);
return (1);
}
}
temp = temp->next;
i++;
}
return (-1);
}
