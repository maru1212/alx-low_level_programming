#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of the arguments
 * @argc: int
 * @argv: list
 *
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c = atoi(argv[1]) * atoi(argv[2]);

        (void)argc;
	if (argc == 3)
	{
		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
