#include "main.h"

/** 
 * reverse_array - reverse array of integers
 * @a: the integer array
 * @n: number of elements of the array
 *
 * Returns: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp; /*take each element from array*/

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
