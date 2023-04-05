#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: The string to be printed in reverse
 *
 * Description: This function takes a string and recursively prints it in
 * reverse order, character by character, until it reaches the null terminator.
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	/* Base case: check if the current character is null terminator */
	if (*s == '\0')
	{
		return;
	}

	/* Recursive case: call the function with the next character in the string */
	_print_rev_recursion(s + 1);

	/* Print the current character using _putchar */
	_putchar(*s);
}
