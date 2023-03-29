#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copying to
 * @src: copying from
 * @n: copying by
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *start = dest;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (start);
}
