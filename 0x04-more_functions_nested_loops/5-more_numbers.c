#include "main.h"

/**
 * more_numbers - print loop of numbers up to 14.
 *
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (!(j == 1 && k >= 5))
				{
					if (j)
						_putchar(j + '0');
					_putchar(k + '0');
				}
			}
		}
		_putchar('\n');
	}
}
