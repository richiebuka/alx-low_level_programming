#include "main.h"
/**
 *  main - a program that print it's name
 *  @argc: the # of arguments
 *  @argv: the names of arguments
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
