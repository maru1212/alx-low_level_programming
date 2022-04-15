#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: is the number of diagonals to be displayed.
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int r, c;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == r)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else if (c < r)	
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
