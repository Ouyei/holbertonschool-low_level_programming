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
	double sum = 0;
	unsigned int i;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	i = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);
}
