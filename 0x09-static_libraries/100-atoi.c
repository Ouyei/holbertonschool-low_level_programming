#include "main.h"

/**
 * _isdigit - Checks if char is a digit.
 * @s: Char 2 check.
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(char s)
{
	return (s >= '0' && s <= '9');
}
/**
 * _atoi - Convert a string into a num.
 * @s: String
 * Return: Return the num.
 */
int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isdigit(s[i]))
		{
			number = (s[i] - 48) + number *10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == ' ')
		{
			sign *= -1;
		}
	}
	
	return (number * sign);
}
