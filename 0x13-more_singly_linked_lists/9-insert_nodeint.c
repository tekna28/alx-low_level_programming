#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 *@head: linked list.
 *@idx: index of the list where the new node
 *should be added. Index starts at 0.
 *@n: data.
 * Return:  address of the new node (Success)
 * NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int i = 0;

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp != NULL || (i == idx - 1 || idx == 0))
{
new = malloc(sizeof(listint_t));
if (new != NULL)
{
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
}
else
{
new->next = temp->next;
temp->next = new;
}
return (new);
}
}
return (NULL);
}
