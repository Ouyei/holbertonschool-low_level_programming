#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer 2 char.
 * @f: Print function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}