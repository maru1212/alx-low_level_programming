#include "main.h"

/**
 * _isalpha - check if the value is alphabetic.
 * @c: The value to be checked.
 *
 *Return: 1 for an alphabet, 0 for other.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
