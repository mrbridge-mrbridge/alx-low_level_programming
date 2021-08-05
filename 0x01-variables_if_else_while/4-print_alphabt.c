#include <stdio.h>

/**
 * main - output alphabeths except e & q
 *
 * Return: 0
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e')
			continue;
		if (alph == 'q')
			continue;
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
