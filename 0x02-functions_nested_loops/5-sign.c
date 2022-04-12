#include "main.h"

/**
 * print_sign - prints sign of the value.
 * @n: the value to be checked.
 * Retrun: 1 if n is +,
 * 0 if n is zero,
 * -1 if n is lessthan zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
