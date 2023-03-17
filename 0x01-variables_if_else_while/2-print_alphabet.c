#include <stdio.h>
/**
 * main - Printing all lower case alphabets
 * Return: 0 (Successful)
 *
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
