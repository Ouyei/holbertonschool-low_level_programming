#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Array for prints a string.
 * @b: Number of memory.
 * Return: Void.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
