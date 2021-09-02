#include <stdio.h>

/**
 * print_rev - prints in reverse
 * @s: string to be printed
 *
 * Return: string
 */

void print_rev(char *s)
{
	int index, len = 0;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
