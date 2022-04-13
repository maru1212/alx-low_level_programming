#include "main.h"

/**
 * times_table - prints the times table of 9.
 *
 *
 *
 */

void times_table(void);
{
	int r, c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			_putchar((c * r) + '0');
			_putchar(',');
			_putchar('\n');
			_putchat('\n');
		}
	}
}
