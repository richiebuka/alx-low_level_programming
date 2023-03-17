#include <stdio.h>

/**
 * main - print 0123456789
 * Return: 0 (Successful)
 */

int main(void)
{
	int num = 0; /* creating and defining variable num */

	while (num < 10)
	{
		printf("%i", num);
		num++; /* increment of num */
	}
	putchar('\n');

	return (0);
}
