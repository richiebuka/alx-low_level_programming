#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @r: integer argument
 * Return: last digit
 */

int print_last_digit(int r)
{
	if (r < 0)

		r *= -1;

	_putchar('0' + (r % 10));

	return (0);
}
