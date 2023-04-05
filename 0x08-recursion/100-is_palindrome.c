#include "main.h"

/**
 * _strlen - Calculate the length of a string
 *
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	return (len);
}

/**
 * is_palindrome - Check if a string is a palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}

	return (0);
}
