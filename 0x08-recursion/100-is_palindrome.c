/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_helper - Checks if a string is a palindrome.
 * @s: A pointer to the string.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
		return (_palindrome_helper(s + 1, len - 2));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (_palindrome_helper(s, len));
}
