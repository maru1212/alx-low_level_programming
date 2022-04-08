#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char newline = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	}
	putchar(newline);
	return (0);
}
