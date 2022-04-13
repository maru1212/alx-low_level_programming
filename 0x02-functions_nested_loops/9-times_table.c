#include "main.h"

/**
 * times_table - prints the times table of 9.
 *
 *
 *
 */

void times_table(void)
{
	int r, c, n;
	
	n = c * r;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (n < 9)
			{
				_putchar((n + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}	
		}
		_putchar('\n');
	}
}
