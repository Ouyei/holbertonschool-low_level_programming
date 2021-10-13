#include "holberton.h"

/**
 * rev_string - prints a string rev
 * @s: A pointer to an int that will be updated
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char t;

	for (i = 0; s[i]; i++)
		l++;

	for (i = 0; i < l / 2; i++)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
	}
}
