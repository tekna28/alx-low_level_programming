#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * The function sets the head to NULL.
 *
 *@head: linked list.
 * Return: no return (Success)
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head != NULL)
{
while (*head != NULL)
{
temp = *head;
*head = temp->next;
free(temp);
}
}
}
