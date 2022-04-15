#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */

int main(void)
{
	int r, n, max;

	max = 1;

	for (r = 3; r <= n; r += 2)
	{
		while (n % r == 0)
		{
			max = n;
			n = n / i;
		}
	}
	printf("%lu\n", max);
	return (0);
}
