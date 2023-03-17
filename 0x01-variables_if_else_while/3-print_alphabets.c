#include <stdio.h>

/**
 * main - print lower and upper case alphabet
 * Return: 0 (Successful)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints uppercases A-Z*/
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	
	return (0);
}
