#include "main.h"

/**
 * _islower - checks if the value is lawercase or not
 */

int _islower(int c)
{
	if ((c <= 'z') && (c >= 'a'))
		return (1);
	else
		return (0);
}
