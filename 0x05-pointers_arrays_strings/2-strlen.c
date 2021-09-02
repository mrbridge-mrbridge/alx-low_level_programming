#include <stdio>

/**
 * _strlen - function of a pointer to string
 * @s - pointer to string
 * Description: returns the length of the string
 *
 * Return: intgeger value
 */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
