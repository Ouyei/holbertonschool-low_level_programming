#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - The iterator maps an array through a func pointer.
 * @array: int array.
 * @size: Array size.
 * @action: Function pointer.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)

		for (i = 0; i < size; i++)
		{
			action(*array),
				array++;
		}
}
