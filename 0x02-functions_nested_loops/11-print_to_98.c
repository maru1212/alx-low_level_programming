#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void print_to_98(int n)
{
	int y;

	if (n > 98)
	{
		for (y = n; y >= 98; y--)
		{
			if (y > 98)
			{
				_putchar(y + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(y + '0');
		}
	}
	if (n == 98)
	{
		putchar(n); 
	}
	if (n < 98)
	{
		for (y = n; y <= 98; y++)
		{
			if (y < 98)
			{
				_putchar(y + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(y + '0');
		}
	}
}
