#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free dogs.
 * @d: Point 2 a dog of type dog_t
 * Return: void.
 **/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
