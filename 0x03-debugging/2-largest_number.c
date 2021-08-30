#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int large, largest;

	if (a >= b)
	{
		large = a;
	}
	else
	{
		large = b;
	}
	if (large >= c)
	{
		largest = large;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
