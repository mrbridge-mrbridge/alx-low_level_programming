#include <stdio.h>

/**
 * main - uppercase and lowercase alphabeths
 *
 * return: 0
 */

int main(void)
{
	char low;
	char upp;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);
	putchar('\n');
	return (0);
}
