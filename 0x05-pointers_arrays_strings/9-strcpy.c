#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: points to buffer
 * @src: points to string
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *answer = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (answer);
}
