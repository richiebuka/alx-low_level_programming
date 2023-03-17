#include <stdio.h>

/**
 * main - print 0123456789 using putchar
 * Return: 0 (Successful)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
