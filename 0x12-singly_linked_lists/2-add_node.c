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
 * add_node - adds a new node at the beginning of a list_t list.
 *
 *@head: linked list
 *@str: string.
 * Return: the address of the new element (Success)
 *or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
if (head != NULL && str != NULL)
{
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);

temp->str = strdup(str);
temp->len = _strlen(str);
temp->next = *head;
*head = temp;
return (temp);
}
return (NULL);
}
