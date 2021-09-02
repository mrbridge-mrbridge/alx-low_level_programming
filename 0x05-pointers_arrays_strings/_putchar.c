#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: character tp be printed
 *
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
