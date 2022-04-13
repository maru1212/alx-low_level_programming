#include "main.h"

/**
 * _abs - computes the absolute value of a number.
 * @n - the value to be computed
 *
 * Return: returns the absolute value of the number
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
