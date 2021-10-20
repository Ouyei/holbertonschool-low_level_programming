#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Given number.
 * @y: Exponent.
 * Return: The integer result, -1 on error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
