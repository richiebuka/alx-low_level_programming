#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
