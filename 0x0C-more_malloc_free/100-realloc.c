#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: old one
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigne int i;
	char *bptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	bptr = malloc(sizepf(char) * new_size);
	if (bptr == NULL)
		return (NULL);
	if (ptr)
	{
		for (i = 0; i < old_size; i++)
		{
			bptr[i] = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (bptr);
}
