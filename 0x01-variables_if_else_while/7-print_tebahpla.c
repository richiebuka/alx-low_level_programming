#include <stdio.h>

/**
 * main - Reverse printing alphabet with putchar
 * Return: 0 (Successful)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;  
	}
	putchar('\n');

	return (0);
}
