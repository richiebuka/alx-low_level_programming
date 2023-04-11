#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridest;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridest = malloc(height * sizeof(int *));
	if (gridest == NULL)
	{
		free(gridest);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridest[i] = malloc(width * sizeof(int));
		if (gridest[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridest[i]);
			free(gridest);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridest[i][j] = 0;

	return (gridest);
}
