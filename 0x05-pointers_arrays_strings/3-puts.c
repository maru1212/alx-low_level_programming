#include "main.h"

/**
 * _puts - puts character
 * @str: the characters to be printed.
 *
 *
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
