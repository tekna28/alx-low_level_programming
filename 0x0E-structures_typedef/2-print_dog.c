#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 *@d: dog structure.
 * Return: no return (Success)
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %f\n", d->age != 0 ? d->age : 0);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
