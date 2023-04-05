#include "main.h"
/**
 * _ptint_rev_recursion - prints a string in reverse
 * @s: string argument
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
