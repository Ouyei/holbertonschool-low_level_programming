# include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: Separator between strings.
 * @n: Number of arguments.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);

		while (i < n)
		{
			str = va_arg(list, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(list);
	}

	printf("\n");
}
