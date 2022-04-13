#include "main.h"

/**
 *
 *
 *
 *
 */

void print_times_table(int n);
{
	int r, c, p;

	p = r * c;

	if ((n > 0) && (n < 15))
	{
		for (r = 0; r <= n; r++)
		{
			_putchar(0);
			_putchar(',');
			_putchar(' ');
			for (c = 0; c <= n; c++)
			{
				p = c * r;
				if (n < 9)
				{
					_putchar(' ');
					_putchar(p + '0');
					_putchar(',');
					_putchar(' ');
				}
				if (n == 9)
					_putchar(p + '0');
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
