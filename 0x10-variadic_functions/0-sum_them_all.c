#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters.
 * @n: num
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int st = 0;
	int i = n;
	va_list list;

	if (!n)
		return (0);
	va_start(list, n);
	while (i--)
		st += va_arg(list, int);
	va_end(list);
	return (st);
}
