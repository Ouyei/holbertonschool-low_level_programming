#include "function_pointers.h"

/**
 * int_index - Searches an integer.
 * @array: Pointer array
 * @size: Number of elements in array
 * @cmp: Pointer 2 the function to be used to compare values.
 * Return: On succes the integer index or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
