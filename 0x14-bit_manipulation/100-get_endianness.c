#include "main.h"

/**
 * get_endianness - Checks if computer is big or little endian
 * Return: 0 if big edian and 1 if little edian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
