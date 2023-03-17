#include <stdio.h>

/*
 * main - print lowercase alpha a-z but remove 'q'and 'e' 
 * Return: 0 (Successful)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
