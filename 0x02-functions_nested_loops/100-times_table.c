#include "main.h"

/**
 *
 *
 *
 *
 */

void print_times_table(int n)
{
	int r, c, p;

	if ((n > 0) && (n < 15))
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			_putchar(',');
			for (c = 1; c <= n; c++)
			{
				p = c * r;
				if ((c < n) && (p < 9))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
					_putchar(',');
				}
				if ((c < n) && (p > 9))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(p + '0');
					_putchar(',');
				}
				if (c == n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				if ( c > n)	
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
