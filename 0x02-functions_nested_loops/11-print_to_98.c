#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void print_to_98(int n)
{
	int y;

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}