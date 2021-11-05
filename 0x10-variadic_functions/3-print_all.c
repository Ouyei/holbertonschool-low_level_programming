#include "variadic_functions.h"

/**
 * print_char - Formats character.
 * @separator: String separator.
 * @ap: Argument pointer.
 */
void print_char(va_list ap, char *separator)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - Formats integer.
 * @separator: String seprator
 * @ap: Argument pointer
 */
void print_int(va_list ap, char *separator)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - Formats float.
 * @separator: String seprator
 * @ap: Argument pointer
 */
void print_float(va_list ap, char *separator)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - Formats string.
 * @separator: String seprator
 * @ap: Argument pointer.
 */
void print_string(va_list ap, char *separator)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s%s", separator, string);

}
/**
 * print_all - Prints out all stuff.
 * @format:  List of types of arguments.
 */

void print_all(const char * const format, ...)
{
	char *separator;
	int i, j;
	va_list list;

	/*Declaring struct*/
	format_type fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	/* initialize va_list for num number of arguments */
	va_start(list, format);

	separator = "";

	/*Start WHILE*/
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0; /*Reset variable j*/
		while (j < 4) /*WHILE for data type*/
		{
			if (format[i] == *(fm[j]).fm) /*Search match*/
			{
				fm[j].p(list, separator); /*Assign values*/
				separator = ", ";

			}
			j++;
		}
		i++;
	} /*End WHILE*/
	printf("\n"); /*New line*/
	va_end(list); /* Clean memory reserved for va_list */
}
