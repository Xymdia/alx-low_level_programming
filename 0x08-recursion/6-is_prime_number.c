#include "main.h"

/**
 * is_prime - Check if a number is prime
 * @n: The number to check
 * @i: The iterator value
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
