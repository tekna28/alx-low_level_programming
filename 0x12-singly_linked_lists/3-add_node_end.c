#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string.
 *
 *@s: string.
 * Return: length of a string (Success)
 */
int _strlen(const char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 *@head: linked list
 *@str: string.
 * Return: the address of the new element (Success)
 *or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
if (str != NULL)
{
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
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
}
return (NULL);
}
