#include "main.h"

/**
 * _isupper - prints out if the value is capital or not.
 * @c: the value to be checked.
 *
 * Return: 1 if it's capital, otherwise 0.
 */

int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
