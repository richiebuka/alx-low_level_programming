#include <stdio.h>
/**
 * main - print 00 to 99 witn no duplicate digits or combos: no 11, no 10 (01)
 * Return: 0 (Successful)
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		putchar(tens);
		putchar(ones);
		
		if (tens != '8' || ones != '9') /*print commas*/
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
