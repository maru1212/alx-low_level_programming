#include "main.h"

/**
 * _islower - checks if the value is lawercase or not
 * @c: The character to be checked.
 *
 * Return: 1 if c _islowercase, 0 otherwise.
 */

int _islower(int c)
{
	if ((c <= 'z') && (c >= 'a'))
		return (1);
	else
		return (0);
}
