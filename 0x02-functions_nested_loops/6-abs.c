#include "main.h"

/**
 *-abs - compute the absolute value of an integer
 *@n: integer argument
 *Return: absolute value
 */

int -abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	return (0);
}
