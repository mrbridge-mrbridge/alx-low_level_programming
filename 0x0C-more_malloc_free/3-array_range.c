  
#include "holberton.h"
#include <stdlib.h>
/**
 * array_fill - Fills the integer array with a range of numbers
 * @arr: Integer array to fill
 * @min: First nubmer in range (included)
 * @max: Last number in range (included)
 * Return: Pointer to the filled array
 */

int *array_fill(int *arr, int min, int max)
{
	int i;

	for (i = 0; i + min <= max; i++)
	{
		arr[i] = i + min;
	}

	return (arr);
}

/**
 * array_range - Creates an integer array and fills it with specified numbers
 * @min: Lowest integer
 * @max: Max integer
 * Return: Pointer to the integer array
 */

int *array_range(int min, int max)
{
	int *out;
	int size;

	if (min > max)
		return (NULL);

	size = 1 + (max - min);
	out = malloc(size * sizeof(int));
	if (out == NULL)
		return (NULL);

	out = array_fill(out, min, max);

	return (out);
}
