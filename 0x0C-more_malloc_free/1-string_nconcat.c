#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string argument
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2, return p to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* account for NULL string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	p = malloc(sizeof(*p) * len); /* malloc and check for error */
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		p[i] = s1[i];
	for (j = 0; j < num; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}