#include "main.h"

/**
 * leet - function that encode a string into 1337
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char stry[] = "aAeEoOtTlL";
	char strx[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == stry[j])
			{
				n[i] = strx[j];
			}
		}
	}
	return (n);
}
