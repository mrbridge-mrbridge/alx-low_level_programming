#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates a memory space with stdlib's malloc
 * @b: Bytes of memory to allocate
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *out = malloc(b);

	if (out == NULL)
		exit(98);
	return (out);
}
