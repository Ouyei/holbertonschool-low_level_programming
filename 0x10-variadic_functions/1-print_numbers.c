#include "variadic_functions.h"

/**
 * print_numbers - Print number followed by a line.
 * @separator: String 2 be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(num_list, n);

		while (i < n)
		{
			printf("%d", va_arg(num_list, int));

			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(num_list);
	}
	printf("\n");
}
