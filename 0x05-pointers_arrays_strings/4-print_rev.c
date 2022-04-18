#include "main.h"

/**
 * print_rev - prints the reverse.
 *
 * @s: the string to be reversed.
 *
 *
 */

void print_rev(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
