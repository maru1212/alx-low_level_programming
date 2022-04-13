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
	
	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			n = c * r;
			if ((n <= 9) && (c < 9))
			{
				_putchar(' ');
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');

			}
			if ((n <= 9) && (c == 9))
			{
				_putchar(n + '0');
			}
			if ((n > 9) && (c < 9))	
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if ((n > 9) && (c == 9))
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');

			}
		}
		_putchar('\n');
	}
}
