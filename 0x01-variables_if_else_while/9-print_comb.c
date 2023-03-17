#include<stdio.h>

/**
 * main - print 0-9 seperated with commas, using putchar
 * Return: 0 (Successful)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
