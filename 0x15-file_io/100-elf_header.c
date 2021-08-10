#include "holberton.h"

/**
  * main - does nothing
  * @argc: n arguments
  * @argv: arguments of command line
  * Return: void
  */
int main(int argc, char **argv)
{
	if (argc != 2)
		printf("Error");
	printf("%s", argv[1]);
	return (0);
}
