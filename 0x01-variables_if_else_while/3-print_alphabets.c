#include <stdio.h>

/**
 * main - Printing all alphabets lower and upper case
 * Return: 0 (Successful)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /* prints lower alphabets a-z */
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /* prints upper alphabets A-Z */
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	
	return (0);
}
