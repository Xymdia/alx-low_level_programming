#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the square root of
 *
 * Return: The natural square root of n. If n does not have a natural
 *         square root, the function returns -1.
 */
int _sqrt_recursion(int n)
{
    return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root
 * @n: Number to calculate the square root of
 * @i: Iterator variable
 *
 * Return: The natural square root of n. If n does not have a natural
 *         square root, the function returns -1.
 */
int sqrt_helper(int n, int i)
{
    if (n == 0)
        return (0);
    if (n < 0)
        return (-1);
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (sqrt_helper(n, i + 1));
}