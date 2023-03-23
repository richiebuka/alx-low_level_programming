#include "main.h"
/**
 * more_numbers - print 0-9 10 times
 *
 * Return: void
 */
void most_numbers(void)
{
	int i;
	int n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
