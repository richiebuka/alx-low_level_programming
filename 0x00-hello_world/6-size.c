#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Successful)
 */

int main(void)
{
	fprintf(stdout,"Size of a char: %zu byte(s)\n", sizeof(char));
	fprintf(stdout,"Size of an int: %zu byte(s)\n", sizeof(int));
	fprintf(stdout,"Size of a long int: %zu byte(s)\n", sizeof(long int));
	fprintf(stdout,"Size of long long int: %zu byte(s)\n", sizeof(long long int));
	fprintf(stdout,"size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
