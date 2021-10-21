#include "main.h"

/**
 * set_string - Set the value of a pointer to a char.
 * @s: Point 2 the adderss of string s.
 * @to: Address to match
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
