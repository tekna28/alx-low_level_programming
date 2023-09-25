#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 *of a listint_t list.
 *
 *@head: linked list.
 *@n: constant integer.
 * Return: the address of the new element(Success)
 *or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new;
return (temp);
}
return (NULL);
}
