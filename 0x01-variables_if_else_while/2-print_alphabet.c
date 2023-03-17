#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: 0 (Successful)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
