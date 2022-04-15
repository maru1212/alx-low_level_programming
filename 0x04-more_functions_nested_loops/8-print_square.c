#include "main.h"

/**
 * print_square - prints square with #.
 * @size: is the size of the squre.
 *
 *
 * Retrun: void.
 */

void print_square(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
