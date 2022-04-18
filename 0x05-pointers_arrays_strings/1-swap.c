#include "main.h"

/**
 * swap_int - swaps the value of a with b.
 * @a: the first value.
 * @b: the second value.
 *
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
