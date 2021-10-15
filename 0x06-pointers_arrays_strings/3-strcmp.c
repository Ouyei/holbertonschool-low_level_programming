#include "main.h"
/**
 * performs lexicogarphic comparison of two string.
 * @s1: the first string
 * @s2: the second string
 * Return: *s1 - *s2
 */

int _strcmp(char *s1, char *s2);

{
	char *s1 = s1;
	char *s2 = s2; /*Decalare poniter*/

	/*WHILE*/
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++; /*Add string one and string two*/
		s2++;
	}
	return (*s1 - *s2);
}
