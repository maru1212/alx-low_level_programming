#include "main.h"

/**
 * print_triangle - prints a triangle pattern
 * @size: is the size of the triangle.
 *
 *
 * Retrurn:void.
 */

void print_triangle(int size)
{
	int r, c, space;

	for (r = 1; r <= size; r++)
	{
		for (space = 0; space < size - r; space++)
		{
		        _putchar(' ');
		}
		for (c = 1; c <= r; c++)
		{
		        _putchar('#');

		}
		_putchar('\n');
	}
}
