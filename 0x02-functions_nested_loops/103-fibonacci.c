#include "main.h"
#include <stdio.h>

/**
 * main - print sum of even fibonacci sequence up to 4000000
 *
 * Return: 0
 */

int main(void)
{
	long int sum = 0;
	long int f1 = 1;
	long int f2 = 2;
	long int temp = 0;

	while (f2 < 4000000)
	{
		if (f2 % 2 == 0)
		{
			sum += f2;
		}
		temp = f1;
		f1 = f2;
		f2 = temp + f2;
	}
	printf("%li\n", sum);
	return (0);
}
