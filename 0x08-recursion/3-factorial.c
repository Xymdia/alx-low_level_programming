/**
 * factorial - Computes the factorial of a given number
 *
 * @n: The number whose factorial is to be computed
 *
 * Return: The factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
