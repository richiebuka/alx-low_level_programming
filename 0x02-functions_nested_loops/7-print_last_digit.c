#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @r: integer argument
 * @ld: last digit of integer
 * Return: last digit
 */

int print_last_digit(int r)
{
	int ld = r % 10;
	
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar('0' + ld);
	return (0);
}
