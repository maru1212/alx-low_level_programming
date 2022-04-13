#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the number
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	char c;

	c = n % 10;
	if (c < 0)
		c *= -1;
	_putchar(c + '0');
	return (c);
}
