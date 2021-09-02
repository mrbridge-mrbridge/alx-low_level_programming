#include <stdio.h>
#include "main.h"

/**
 * _puts - print out a string
 * @str: string to be printed
 *
 * Return: string
 */

void _puts(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
