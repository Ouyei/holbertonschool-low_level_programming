#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a dog.
 * @d: Dog 2 print.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == 0)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
