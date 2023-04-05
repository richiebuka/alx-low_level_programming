#include "main.h"
/**
 * factorial - prints the factorial of a given number
 * @n: number argument
 * Return: 1, -1, or factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
