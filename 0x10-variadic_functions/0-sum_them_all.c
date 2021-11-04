#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters.
 * @n: num
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
