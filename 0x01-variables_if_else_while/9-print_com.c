#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	short c = ',';
	short s = ' ';
	short new = '\n';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(c);
		putchar(s);
	}
	putchar(new);
	return (0);
}