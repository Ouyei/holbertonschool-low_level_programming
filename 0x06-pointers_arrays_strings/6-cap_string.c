#include "main.h"

/**
 * separ - checks if char is separator
 * @c: char to be check
 * Return: is separ retunr 1, otherwise return 0.
 */

int separ(char c)
{
	/*Declare condition switch*/
	switch (c)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);

	default:
		return (0);
	}
}
/**
 * cap_string - capitalizes each word of a string
 * @s: the string to capitalize
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int count, uppercase;

	uppercase = -32; /*Value constant 32*/

	count = 0;
	while (s[count] != '\0')
	{
		/*letters lowercase*/
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			/*Convert uppercase*/
			if (s[count] == *s || separ(s[count - 1]))

				s[count] += uppercase;
		}
		count++; /*Add count*/
	}
	return (s);
}
