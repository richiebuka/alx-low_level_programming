#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - comparing last digit of randomly generated digits
 * Return: 0 (Successful)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /* generating random number */

	printf("Last digit of %i is %i ans is ", n, (n % 10));
	
	if ((n % 10) > 5) /* if last digit of n is greater than 5 */
	{
		printf("greater thsn 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else 
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
