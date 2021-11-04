#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first int.
 * @b: The second int.
 *
 * Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts 2 integers.
 * @a: First int.
 * @b: Second int.
 *
 * Return: The difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of a and b.
 * @a: First int.
 * @b: Second int.
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of a and b.
 * @a: First int.
 * @b: Second int.
 * Return: div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod -  Modulo two integers.
 * @a: First int.
 * @b: Second int.
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
