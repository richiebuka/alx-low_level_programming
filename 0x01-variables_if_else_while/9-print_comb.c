#include<stdio.h>
/**
 * main - print single digit numbers seperated by commas and whitespace using putchar
 * Return: 0 (Successful)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
