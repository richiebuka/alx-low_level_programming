#include<stdio.h>
/**
 * main - printing all numbers of base 16 in lowercase
 * Return: 0 (Successful)
 */

int main(void)
{
	int num = '0';
	int alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
