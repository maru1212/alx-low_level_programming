#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';
	char newline = '\n';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(newline);
	return (0);
}
