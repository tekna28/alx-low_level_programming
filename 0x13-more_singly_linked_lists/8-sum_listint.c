#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *of a listint_t linked list.
 *
 *@head: linked list.
 * Return:  sum of all the data (n) of a listint_t
 *linked list.(Success) if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
int n = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
n = head->n;
sum = sum + n;
head = head->next;
}
return (sum);
}
