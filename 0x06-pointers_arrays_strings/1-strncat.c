#include "main.h"

/**
 * _strncat - appends strings
 * @dest: the destination of the string to be appended
 * @src: the characters to be appended
 * @n: the digit
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
