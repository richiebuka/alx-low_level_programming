#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints multiples of 3 0r 5 under 1024
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; 1 < 1024; 1++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
