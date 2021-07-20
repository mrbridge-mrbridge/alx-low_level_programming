#include <stdio.h>


/**
 * main - prints name of file compiled from
 * followed by new line
 * Return: everything worked okay
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
