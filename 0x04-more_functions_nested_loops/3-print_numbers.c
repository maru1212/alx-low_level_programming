#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9.
 *
 *
 *
 *
 * Retrun: void
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
