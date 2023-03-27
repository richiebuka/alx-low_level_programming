#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: string argument
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str)
		str++;
	}
	_putchar('\n');
}
