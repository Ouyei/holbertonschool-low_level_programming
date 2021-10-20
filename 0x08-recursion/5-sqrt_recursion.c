#include "main.h"

/**
 * _muletto - Evaluate function sqrt.
 * @n: Natural number whose root to find.
 * @r: Root iterator
 * Return: Natural root of n
 */
int _muletto(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (_muletto(n, r + 1));
}

/**
 * _sqrt_recursion - Find the natural square root of a number.
 * @n: Given number to root.
 * Return: Square root, -1 on error.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_muletto(n, 0));
}
