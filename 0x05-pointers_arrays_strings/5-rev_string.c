#include "main.h"

/**
 * rev_string - prints the revers of the string.
 * @s: the string to be reversed.
 *
 *
 */

void rev_string(char *s)
{
	int length, i, j;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
