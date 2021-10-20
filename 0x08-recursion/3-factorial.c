#include "main.h"

/**
 * factorial - Returns factorial of given number.
 * @n: The number to factorial or pointer block of memory to fill.
 * Return: Factorial, -1 on error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n *factorial(n -1));
	return (1);
}
