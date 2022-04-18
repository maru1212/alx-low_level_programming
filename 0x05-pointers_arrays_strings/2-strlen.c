#include "main.h"

/**
 * _strlen - counts the number of charactors.
 * @s: are the characters to be counted
 *
 * Return: always i (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}

	return (i);
}
