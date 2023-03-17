#include <stdio.h>

/**
 * main - print a num pair from 00-99 with no repeats
 * Return: 0 (successful)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				for (o = '1'; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if ((tens != '9' && ones != '8') && (t != '9' && o != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
