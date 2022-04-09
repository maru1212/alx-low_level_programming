#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int c = 0;
	int u = 0;

	for (n = '0'; n <= '7'; n++)
	{
		for (c = '0'; c <= '8'; c++)
			if (c > n)
			{
				for (u = '0'; u <= '9'; u++)
				{
					if (u > c)
					{
						putchar(n);
						putchar(c);
						putchar(u);

						if ((n != '7') && (c != 8) && (u != 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
	}
	putchar('\n');
	return (0);
}

