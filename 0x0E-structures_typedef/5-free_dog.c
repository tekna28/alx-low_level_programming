#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 *@d: dog structure.
 * Return: no return (Success)
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
