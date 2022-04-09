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

	for (n = '0'; n <= '8'; n++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (n < c)
			{
				putchar(n);
				putchar(c);
				if ((n != '8') && (c != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
