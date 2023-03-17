#include <stdio.h>

/*
 * main - Printing all single numbers using printf
 * Return: 0 (Successful)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');

	return (0);
}
