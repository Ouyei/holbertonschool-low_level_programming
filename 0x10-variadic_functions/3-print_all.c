#include "variadic_functions.h"

/**
 * format_c - Formats character.
 * @separator: String seprator
 * @ap: Argument pointer
 */
void format_c(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_i - Formats integer
 * @separator: String seprator
 * @ap: Argument pointer
 */
void format_i(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_f - Formats float
 * @separator: String seprator
 * @ap: Argument pointer
 */
void format_f(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_s - Formats string
 * @separator: String seprator
 * @ap: Argument pointer
 */
void format_s(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything
 * @format: Format string
 */
void print_all(const char * const format, ...)
{
	va_list x;
	int i = 0, j;
	char *separator = "";
	
	print_t print[] = {
		{"c", format_c},
		{"i", format_i},
		{"f", format_f},
		{"s", format_s},
		{NULL, NULL}
	};

	va_start(x, format);
	while (format && format[i])
	{
		j = 0;
		while (print[j].print)
		{
			if (format[i] == print[j].print[0])
			{
				print[j].p(separator, x);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(x);
}
