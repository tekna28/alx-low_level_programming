#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 *listint_t linked list.
 *
 *@head: linked list.
 * Return: the head node’s data (n).(Success)
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int value;

if (temp != NULL)
{
value = temp->n;
*head = temp->next;
free(temp);
}
else
{
value = 0;
}
return (value);
}
