#include "main.h"

/**
 * _sqrt - Compute the natural square root of a number.
 * @n: The number to compute the square root of.
 * @x: An initial guess for the square root.
 *
 * Return: If no natural square root exists, -1.
 *         Otherwise, the natural square root of n.
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - Compute the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: If no natural square root exists, -1.
 *         Otherwise, the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
