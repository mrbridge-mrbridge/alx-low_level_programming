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
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
