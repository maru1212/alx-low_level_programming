#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small = 'a';
	char capital = 'A';
	char newline = '\n';

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (capital = 'A'; capital <= 'Z'; capital++)
		putchar(capital);
	putchar(newline);
	return (0);
}

