#include "main.h"

/**
 * puts_half - prints half of the characters inputed.
 * @str: the inputed string
 *
 */

void puts_half(char *str)
{
	int i, j, u;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		j = i / 2;

		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		u = (i - 1) / 2 + 1;

		while (u < i)
		{
			_putchar(str[u]);
			u++;
		}
	}
	_putchar('\n');
}
