#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 *
 * @n: An integer number to compute its factorial.
 *
 * Return: The factorial of the number @n.
 *         If @n is lower than 0, returns -1 to indicate an error.
 *         If the factorial is too large to be computed, returns -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	if (n > 12)
		return (-1);

	return (n * factorial(n - 1));
}