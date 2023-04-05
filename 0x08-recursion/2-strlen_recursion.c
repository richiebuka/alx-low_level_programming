#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string argument
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
