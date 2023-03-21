#include <stdio.h>
#include "main.h"

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int a, b, c;
	long int i;
	int upto = 50;

	a = 0;
	b = 1;
	c = 1;
	for (i = 1; i <= upto; i++)
	{
		printf("%li", c);
		a = b;
		b = c;
		c = a + b;
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
