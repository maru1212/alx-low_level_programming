#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers up to 98.
 * @n: number to start from.
 * 
 */

void print_to_98(int n)
{
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
