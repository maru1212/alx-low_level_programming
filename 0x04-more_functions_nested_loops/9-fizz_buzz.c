#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char F[100] = "Fizz", B[100] = "Buzz";

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s%s", F, B);
		else if (n % 3 == 0)
			printf("%s", F);
		else if (n % 5 == 0)
	      	        printf("%s", B);
		else
			printf("%d", n);
		if (n != 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
