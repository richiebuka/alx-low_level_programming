#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Successful)
 */

int main(void)
{
	fprintf(stderr,"Size of a char: %zu byte(s)\n", sizeof(char));
	printf(stderr,"Size of an int: %zu byte(s)\n", sizeof(int));
	printf(stderr,"Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf(stderr,"Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf(stderr,"size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
