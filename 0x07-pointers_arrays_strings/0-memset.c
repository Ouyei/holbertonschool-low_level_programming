#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer block of memory (buffer) to fill.
 * @b: The constant byte or desired value to set
 * @n: Size of buffer to fill
 * Return: pointer 2 destination buffer
 */
char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	/*Declare*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*End*/

	return (s);
}
