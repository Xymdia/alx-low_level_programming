#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively
 * @s: The string to calculate the length of
 *
 * Description: This function takes a string and recursively calculates its
 *              length by incrementing a counter for each character in the
 *              string until it reaches the null terminator.
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: check if the current character is null terminator */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive case: add 1 to the count and call the function with the next character */
	return (1 + _strlen_recursion(s + 1));
}