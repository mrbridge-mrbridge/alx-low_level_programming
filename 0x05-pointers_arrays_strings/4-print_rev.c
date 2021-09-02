#include <stdio.h>

/**
 * print_rev - prints in reverse
 * @s: string to be printed
 *
 * Return: string
 */

 void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}

	while (*s)
	{
		putchar(s[j]);
		j--;
	}
}
