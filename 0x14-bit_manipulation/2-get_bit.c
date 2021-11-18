#include "main.h"

/**
 * get_bit - Get the bit of a given index.
 * @n: Number 2 evaluate.
 * @index: Position of the bit.
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i; /*bit value*/

	if (index > 63)
		return (-1);
	
	/*iterating number to the right index*/
	i = (n >> index) & 1;

	return (i);
}
