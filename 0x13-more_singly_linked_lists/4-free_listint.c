#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 *@head: linked list.
 * Return: no return (Success)
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
