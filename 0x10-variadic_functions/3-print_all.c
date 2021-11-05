#include "variadic_functions.h"

/**
 * print_char - Formats character.
 * @separator: String separator.
 * @ap: Argument pointer.
 */
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - Formats integer.
 * @separator: String seprator
 * @ap: Argument pointer
 */
void print_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - Formats float.
 * @separator: String seprator
 * @ap: Argument pointer
 */
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - Formats string.
 * @separator: String seprator
 * @ap: Argument pointer
 */
void print_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

