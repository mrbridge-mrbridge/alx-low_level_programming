#include <stdio.h>

/**
 * print_rev - funtion with 1 argument
 * @s: 1st argument char type
 *
 * Description: function that prints a string in reverse
 *Return: na
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	};
	putchar('\n');
}
