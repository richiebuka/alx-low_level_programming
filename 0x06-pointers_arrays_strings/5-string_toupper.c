#include "main.h"
/**
 * string_toupper - capitalize letters in string
 * @s: string argument
 * Return: char
 */
char *string_toupper(char *s)
{
	char *p = s;

	for (; *s; s++)
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
	}
	return (p);
}
