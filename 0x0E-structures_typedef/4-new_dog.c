#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: Point 2 a char 4 name of a dog.
 * @age: Age of the dog.
 * @owner: Pointer 2 a char for owner of the dog.
 * Return: Pointer 2 a new dog of type dog_t.
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, o = 0;
	dog_t *pup;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	pup->name = malloc(i + 1);
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	while (owner[o] != '\0')
		o++;
	pup->owner = malloc(o + 1);
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		pup->name[i] = name[i];
	pup->name[i] = '\0';
	for (o = 0; owner[o] != '\0'; o++)
		pup->owner[o] = owner[o];
	pup->owner[o] = '\0';
	pup->age = age;
	return (pup);
}
