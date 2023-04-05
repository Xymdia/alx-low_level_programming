#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: The number to compute its factorial
 *
 * Return: The factorial of n, -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}