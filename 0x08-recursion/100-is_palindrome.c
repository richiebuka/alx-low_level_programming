#include "main.h"
/**
 * compr - compare head and tail indices for match
 * @head: starts from left of string
 * @tail: starts from right of string moving backwards
 * Return: 1 if palindrome, 0 if not
 */
int compr(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compr(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - finds length of string to access last index
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compr(s, (s + len - 1)));
}
