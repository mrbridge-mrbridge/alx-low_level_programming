#include <stdio.h>

/**
 * swap_int - function with two int type positive argument
 * @a: !st argument int type
 * @b: @nd argument int type
 *
 * Description: Using pointer to change value of a and b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
