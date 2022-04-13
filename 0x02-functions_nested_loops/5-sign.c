#include "main.h"

/**
 * print_sign - prints sign of a number.
 * @n: the value to be checked.
 * Retrun: print_sign will be 1 if n is +, 0, if n = 0 and -1 otherwise.
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
