#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: the pointer input
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(++s);
}
