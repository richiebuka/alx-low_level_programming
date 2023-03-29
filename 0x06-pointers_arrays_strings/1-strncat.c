#include "main.h"
/**
 * _strncat - function that concatenate 2 strings by n
 * @dest: appending to
 * @src: appending from
 * @n: appending by
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
		dest++;
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			break;
	}
	return (start);
}
