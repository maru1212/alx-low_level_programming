#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long r, n, max;

	n = 612852475143;
	max = 1;

	for (r = 3; r <= n; r += 2)
	{
		while (n % r == 0)
		{
			max = n;
			n = n / r;
		}
	}
	printf("%lu\n", max);
	return (0);
}
