#include "main.h"

/**
 *_abs - compute the absolute value of an integer
 *@r: integer argument
 *Return: absolute value
 */

int _abs(int r)
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
