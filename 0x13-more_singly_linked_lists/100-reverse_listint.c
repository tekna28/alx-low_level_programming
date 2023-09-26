#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 *@head: linked list.
 * Return: a pointer to the first node of the reversed list(Success)
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next_node, *previous_node = NULL;

while (head != NULL && *head != NULL)
{
next_node = (*head)->next;
(*head)->next = previous_node;
previous_node = *head;
*head = next_node;
}
*head = previous_node;
return (*head);
}
