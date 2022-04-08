#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char alpha = 'a';
	char newline = '\n';

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar(newline);
	return (0);
}
