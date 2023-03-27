#include "main.h"
/**
 * _strlen - counts and returns string length
 * @s: the string argument
 * Return: length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}
