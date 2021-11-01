#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Point to an element of type dog.
 * @name: Point 2 a char 4 name of dog.
 * @age: Doge age.
 * @owner: Point 2 a char 4 owner of dog.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
