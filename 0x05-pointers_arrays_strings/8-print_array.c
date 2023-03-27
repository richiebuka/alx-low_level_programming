#include "main.h"
/**
 * print_array - prints n of an array
 * @a: array argument
 * @n: the #
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		printf("%d", a[i]);
		i++;
		n--;
	}
	for (; n > 0; n--)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
