#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of
 *a listint_t list.
 *
 *@head: linked list.
 *@n: constant integer.
 * Return: the address of the new element(Success)
 *or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

if (head != NULL)
{
temp = malloc(sizeof(listint_t));

if (temp == NULL)
return (NULL);

temp->n = n;
temp->next = *head;
*head = temp;

return (temp);
}
return (NULL);
}
