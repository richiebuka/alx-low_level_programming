#include "main.h"
/**
 * print_triangle - drawa a diagonal line
 * @size: length of triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > x; y--)
			{
				_putchar(' ');
			}
			for (z = 0; z < x; z++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
