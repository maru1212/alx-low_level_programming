#include "main.h"

/**
 * _isalpha - check if the value is alphabet or not
 * @c: The value to be checked
 *
 *return 1 for an alphabet, 0 for other.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
