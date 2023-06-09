#include "main.h"
/**
 * reverse_array - reverses the content of an array of ints
 * @a: array argument
 * @n: number of elements in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int *z = a;

	for (i = 0; i < (n - 1); i++)
		z++;
	for (i = 0; i <= n; i++)
		while (a < z)
		{
			temp = *a;
			*a = *z;
			*z = temp;
			a++;
			z--;
		}
}
