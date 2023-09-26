#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 *@head: linked list.
 * Return:  the number of nodes in the list(Success)
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0, j;
const listint_t *check, *temp = head;

while (temp != NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
i++;
temp = temp->next;
check = head;
j = 0;
while (j < i)
{
if (temp == check)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
return (i);
}
check = check->next;
j++;
}
}
return (i);
}
