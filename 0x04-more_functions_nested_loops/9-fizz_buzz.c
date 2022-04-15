#include <stdio.h>

/**
 * main - prints numbers up to 100
 *
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char F[100] = "Fizz", B[100] = "Buzz";

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s%s ", F, B);
		else if (n % 3 == 0)
			printf("%s ", F);
		else if (n % 5 == 0)
			printf("%s ", B);
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
