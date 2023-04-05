#include "main.h"
/**
 * _sqrt_recursion - print the natural square root of a number
 * @n: number argument
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: number parameter
 * @r: test root
 * Return: sqrt
 */
int _sqrt(int n, int r)
{
	if ((r * r) > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_sqrt(n, r + 1));
}
