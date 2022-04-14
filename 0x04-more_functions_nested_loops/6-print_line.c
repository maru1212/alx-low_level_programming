#include "main.h"

/**
 * print_line - is a funcion which prints a line.
 * @n: number of how many time "_" will be written,
 *
 * Return: void.
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
