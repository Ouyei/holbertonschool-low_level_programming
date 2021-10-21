#include "main.h"
/**
 * _muletto - Recursion to determine if n > 2 is prime.
 * @n: Given number.
 * @i: Number to iterate.
 * Return: 1 if prime, 0 if composite.
 */
int _muletto(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i)
		return (_muletto(n, i + 2));
	return (0);
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: Given number to check.
 * Return: Return 1 prime, 0 if composite.
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

		if (n < 2)
		{
			return (0);
		}
	if (n == 2)
	{
		return (1);
	}
	return (_muletto(n, i));
}
