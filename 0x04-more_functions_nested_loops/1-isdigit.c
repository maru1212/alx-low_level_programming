#include "main.h"

/**
 * _isdigit - prints out if the value is capital or not.
 * @c: the value to be checked.
 *
 * Return: 1 if it's digit, otherwise 0.
 */

int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
