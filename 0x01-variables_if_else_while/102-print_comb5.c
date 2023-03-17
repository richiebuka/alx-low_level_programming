#include <stdio.h>

/**
 * main - print a num pair from 00-99 with no repeats
 * Return: 0 (successful)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num1 < num2)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(32);
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);

				if (num1 != 98 || num2 != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
